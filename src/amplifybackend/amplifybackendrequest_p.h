// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYBACKENDREQUEST_P_H
#define QTAWS_AMPLIFYBACKENDREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class AmplifyBackendRequest;

class AmplifyBackendRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AmplifyBackendRequest::Action action; ///< AmplifyBackend action to be performed.
    QString apiVersion;        ///< AmplifyBackend API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AmplifyBackend request (query string) parameters. @todo?

    AmplifyBackendRequestPrivate(const AmplifyBackendRequest::Action action, AmplifyBackendRequest * const q);
    AmplifyBackendRequestPrivate(const AmplifyBackendRequestPrivate &other, AmplifyBackendRequest * const q);

    static QString toString(const AmplifyBackendRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AmplifyBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
