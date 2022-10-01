// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDEVICEADVISORREQUEST_P_H
#define QTAWS_IOTDEVICEADVISORREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class IotDeviceAdvisorRequest;

class IotDeviceAdvisorRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IotDeviceAdvisorRequest::Action action; ///< IotDeviceAdvisor action to be performed.
    QString apiVersion;        ///< IotDeviceAdvisor API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IotDeviceAdvisor request (query string) parameters. @todo?

    IotDeviceAdvisorRequestPrivate(const IotDeviceAdvisorRequest::Action action, IotDeviceAdvisorRequest * const q);
    IotDeviceAdvisorRequestPrivate(const IotDeviceAdvisorRequestPrivate &other, IotDeviceAdvisorRequest * const q);

    static QString toString(const IotDeviceAdvisorRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IotDeviceAdvisorRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
