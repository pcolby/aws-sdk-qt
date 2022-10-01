// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCOUNTREQUEST_P_H
#define QTAWS_ACCOUNTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "accountrequest.h"

namespace QtAws {
namespace Account {

class AccountRequest;

class AccountRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AccountRequest::Action action; ///< Account action to be performed.
    QString apiVersion;        ///< Account API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Account request (query string) parameters. @todo?

    AccountRequestPrivate(const AccountRequest::Action action, AccountRequest * const q);
    AccountRequestPrivate(const AccountRequestPrivate &other, AccountRequest * const q);

    static QString toString(const AccountRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AccountRequest)

};

} // namespace Account
} // namespace QtAws

#endif
