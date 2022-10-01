// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOMMENDERCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATERECOMMENDERCONFIGURATIONRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateRecommenderConfigurationResponse;

class UpdateRecommenderConfigurationResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateRecommenderConfigurationResponsePrivate(UpdateRecommenderConfigurationResponse * const q);

    void parseUpdateRecommenderConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRecommenderConfigurationResponse)
    Q_DISABLE_COPY(UpdateRecommenderConfigurationResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
