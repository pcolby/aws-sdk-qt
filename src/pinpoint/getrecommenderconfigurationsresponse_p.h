// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONSRESPONSE_P_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationsResponse;

class GetRecommenderConfigurationsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetRecommenderConfigurationsResponsePrivate(GetRecommenderConfigurationsResponse * const q);

    void parseGetRecommenderConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecommenderConfigurationsResponse)
    Q_DISABLE_COPY(GetRecommenderConfigurationsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
