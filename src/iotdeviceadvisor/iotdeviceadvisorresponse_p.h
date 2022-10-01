// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDEVICEADVISORRESPONSE_P_H
#define QTAWS_IOTDEVICEADVISORRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class IotDeviceAdvisorResponse;

class IotDeviceAdvisorResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IotDeviceAdvisorResponsePrivate(IotDeviceAdvisorResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IotDeviceAdvisorResponse)
    Q_DISABLE_COPY(IotDeviceAdvisorResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
