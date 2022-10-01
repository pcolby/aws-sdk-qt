// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESRESPONSE_P_H
#define QTAWS_UPDATEDEVICESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateDevicesResponse;

class UpdateDevicesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateDevicesResponsePrivate(UpdateDevicesResponse * const q);

    void parseUpdateDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDevicesResponse)
    Q_DISABLE_COPY(UpdateDevicesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
