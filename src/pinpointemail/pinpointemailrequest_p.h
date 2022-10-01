// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTEMAILREQUEST_P_H
#define QTAWS_PINPOINTEMAILREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PinpointEmailRequest;

class PinpointEmailRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PinpointEmailRequest::Action action; ///< PinpointEmail action to be performed.
    QString apiVersion;        ///< PinpointEmail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PinpointEmail request (query string) parameters. @todo?

    PinpointEmailRequestPrivate(const PinpointEmailRequest::Action action, PinpointEmailRequest * const q);
    PinpointEmailRequestPrivate(const PinpointEmailRequestPrivate &other, PinpointEmailRequest * const q);

    static QString toString(const PinpointEmailRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PinpointEmailRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
