// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTDATADELIVERYRESPONSE_P_H
#define QTAWS_UPDATEPROJECTDATADELIVERYRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class UpdateProjectDataDeliveryResponse;

class UpdateProjectDataDeliveryResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit UpdateProjectDataDeliveryResponsePrivate(UpdateProjectDataDeliveryResponse * const q);

    void parseUpdateProjectDataDeliveryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProjectDataDeliveryResponse)
    Q_DISABLE_COPY(UpdateProjectDataDeliveryResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
