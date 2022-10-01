// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKIDENTITYREQUEST_P_H
#define QTAWS_CHIMESDKIDENTITYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ChimeSdkIdentityRequest;

class ChimeSdkIdentityRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ChimeSdkIdentityRequest::Action action; ///< ChimeSdkIdentity action to be performed.
    QString apiVersion;        ///< ChimeSdkIdentity API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ChimeSdkIdentity request (query string) parameters. @todo?

    ChimeSdkIdentityRequestPrivate(const ChimeSdkIdentityRequest::Action action, ChimeSdkIdentityRequest * const q);
    ChimeSdkIdentityRequestPrivate(const ChimeSdkIdentityRequestPrivate &other, ChimeSdkIdentityRequest * const q);

    static QString toString(const ChimeSdkIdentityRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ChimeSdkIdentityRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
