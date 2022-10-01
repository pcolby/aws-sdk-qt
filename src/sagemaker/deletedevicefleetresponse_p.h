// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEFLEETRESPONSE_P_H
#define QTAWS_DELETEDEVICEFLEETRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteDeviceFleetResponse;

class DeleteDeviceFleetResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteDeviceFleetResponsePrivate(DeleteDeviceFleetResponse * const q);

    void parseDeleteDeviceFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceFleetResponse)
    Q_DISABLE_COPY(DeleteDeviceFleetResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
