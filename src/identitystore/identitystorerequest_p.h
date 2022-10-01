// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IDENTITYSTOREREQUEST_P_H
#define QTAWS_IDENTITYSTOREREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class IdentityStoreRequest;

class IdentityStoreRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IdentityStoreRequest::Action action; ///< IdentityStore action to be performed.
    QString apiVersion;        ///< IdentityStore API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IdentityStore request (query string) parameters. @todo?

    IdentityStoreRequestPrivate(const IdentityStoreRequest::Action action, IdentityStoreRequest * const q);
    IdentityStoreRequestPrivate(const IdentityStoreRequestPrivate &other, IdentityStoreRequest * const q);

    static QString toString(const IdentityStoreRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IdentityStoreRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
