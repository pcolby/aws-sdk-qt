// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKDEVICESREQUEST_P_H
#define QTAWS_IOT1CLICKDEVICESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class IoT1ClickDevicesRequest;

class IoT1ClickDevicesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoT1ClickDevicesRequest::Action action; ///< IoT1ClickDevices action to be performed.
    QString apiVersion;        ///< IoT1ClickDevices API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoT1ClickDevices request (query string) parameters. @todo?

    IoT1ClickDevicesRequestPrivate(const IoT1ClickDevicesRequest::Action action, IoT1ClickDevicesRequest * const q);
    IoT1ClickDevicesRequestPrivate(const IoT1ClickDevicesRequestPrivate &other, IoT1ClickDevicesRequest * const q);

    static QString toString(const IoT1ClickDevicesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoT1ClickDevicesRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
