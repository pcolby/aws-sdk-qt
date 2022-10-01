// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSDATAREQUEST_P_H
#define QTAWS_IOTEVENTSDATAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataRequest;

class IoTEventsDataRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTEventsDataRequest::Action action; ///< IoTEventsData action to be performed.
    QString apiVersion;        ///< IoTEventsData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTEventsData request (query string) parameters. @todo?

    IoTEventsDataRequestPrivate(const IoTEventsDataRequest::Action action, IoTEventsDataRequest * const q);
    IoTEventsDataRequestPrivate(const IoTEventsDataRequestPrivate &other, IoTEventsDataRequest * const q);

    static QString toString(const IoTEventsDataRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTEventsDataRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
