// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMESSAGINGREQUEST_P_H
#define QTAWS_CHIMESDKMESSAGINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ChimeSdkMessagingRequest;

class ChimeSdkMessagingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ChimeSdkMessagingRequest::Action action; ///< ChimeSdkMessaging action to be performed.
    QString apiVersion;        ///< ChimeSdkMessaging API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ChimeSdkMessaging request (query string) parameters. @todo?

    ChimeSdkMessagingRequestPrivate(const ChimeSdkMessagingRequest::Action action, ChimeSdkMessagingRequest * const q);
    ChimeSdkMessagingRequestPrivate(const ChimeSdkMessagingRequestPrivate &other, ChimeSdkMessagingRequest * const q);

    static QString toString(const ChimeSdkMessagingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMessagingRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
