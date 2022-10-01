// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWDEVICEMANAGEMENTRESPONSE_P_H
#define QTAWS_SNOWDEVICEMANAGEMENTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

class SnowDeviceManagementResponse;

class SnowDeviceManagementResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SnowDeviceManagementResponsePrivate(SnowDeviceManagementResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SnowDeviceManagementResponse)
    Q_DISABLE_COPY(SnowDeviceManagementResponsePrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
