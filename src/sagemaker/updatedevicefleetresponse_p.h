// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEFLEETRESPONSE_P_H
#define QTAWS_UPDATEDEVICEFLEETRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateDeviceFleetResponse;

class UpdateDeviceFleetResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateDeviceFleetResponsePrivate(UpdateDeviceFleetResponse * const q);

    void parseUpdateDeviceFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceFleetResponse)
    Q_DISABLE_COPY(UpdateDeviceFleetResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
