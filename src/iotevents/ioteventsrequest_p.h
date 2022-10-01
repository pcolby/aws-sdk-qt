// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSREQUEST_P_H
#define QTAWS_IOTEVENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class IoTEventsRequest;

class IoTEventsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTEventsRequest::Action action; ///< IoTEvents action to be performed.
    QString apiVersion;        ///< IoTEvents API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTEvents request (query string) parameters. @todo?

    IoTEventsRequestPrivate(const IoTEventsRequest::Action action, IoTEventsRequest * const q);
    IoTEventsRequestPrivate(const IoTEventsRequestPrivate &other, IoTEventsRequest * const q);

    static QString toString(const IoTEventsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTEventsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
