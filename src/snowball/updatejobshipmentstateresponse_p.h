// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSHIPMENTSTATERESPONSE_P_H
#define QTAWS_UPDATEJOBSHIPMENTSTATERESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class UpdateJobShipmentStateResponse;

class UpdateJobShipmentStateResponsePrivate : public SnowballResponsePrivate {

public:

    explicit UpdateJobShipmentStateResponsePrivate(UpdateJobShipmentStateResponse * const q);

    void parseUpdateJobShipmentStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobShipmentStateResponse)
    Q_DISABLE_COPY(UpdateJobShipmentStateResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
