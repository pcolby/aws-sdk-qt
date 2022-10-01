// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDEVICEADVISORCLIENT_P_H
#define QTAWS_IOTDEVICEADVISORCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IotDeviceAdvisor {

class IotDeviceAdvisorClient;

class IotDeviceAdvisorClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IotDeviceAdvisorClientPrivate(IotDeviceAdvisorClient * const q);

private:
    Q_DECLARE_PUBLIC(IotDeviceAdvisorClient)
    Q_DISABLE_COPY(IotDeviceAdvisorClientPrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
