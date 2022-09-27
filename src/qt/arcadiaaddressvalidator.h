// Copyright (c) 2011-2014 The Arcadia Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ArcadiaAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ArcadiaAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Arcadia address widget validator, checks for a valid arcadia address.
 */
class ArcadiaAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ArcadiaAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
