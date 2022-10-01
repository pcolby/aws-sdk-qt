// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTREQUEST_P_H
#define QTAWS_PINPOINTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class PinpointRequest;

class PinpointRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PinpointRequest::Action action; ///< Pinpoint action to be performed.
    QString apiVersion;        ///< Pinpoint API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Pinpoint request (query string) parameters. @todo?

    PinpointRequestPrivate(const PinpointRequest::Action action, PinpointRequest * const q);
    PinpointRequestPrivate(const PinpointRequestPrivate &other, PinpointRequest * const q);

    static QString toString(const PinpointRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PinpointRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
