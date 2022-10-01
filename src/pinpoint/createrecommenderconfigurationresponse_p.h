// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATERECOMMENDERCONFIGURATIONRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateRecommenderConfigurationResponse;

class CreateRecommenderConfigurationResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateRecommenderConfigurationResponsePrivate(CreateRecommenderConfigurationResponse * const q);

    void parseCreateRecommenderConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRecommenderConfigurationResponse)
    Q_DISABLE_COPY(CreateRecommenderConfigurationResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
