// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEFLEETRESPONSE_P_H
#define QTAWS_CREATEDEVICEFLEETRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateDeviceFleetResponse;

class CreateDeviceFleetResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateDeviceFleetResponsePrivate(CreateDeviceFleetResponse * const q);

    void parseCreateDeviceFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeviceFleetResponse)
    Q_DISABLE_COPY(CreateDeviceFleetResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
