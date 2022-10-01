// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESRESPONSE_P_H
#define QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateEndpointWeightsAndCapacitiesResponse;

class UpdateEndpointWeightsAndCapacitiesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateEndpointWeightsAndCapacitiesResponsePrivate(UpdateEndpointWeightsAndCapacitiesResponse * const q);

    void parseUpdateEndpointWeightsAndCapacitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointWeightsAndCapacitiesResponse)
    Q_DISABLE_COPY(UpdateEndpointWeightsAndCapacitiesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
