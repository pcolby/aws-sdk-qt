// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationResponse;

class GetRecommenderConfigurationResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetRecommenderConfigurationResponsePrivate(GetRecommenderConfigurationResponse * const q);

    void parseGetRecommenderConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecommenderConfigurationResponse)
    Q_DISABLE_COPY(GetRecommenderConfigurationResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
