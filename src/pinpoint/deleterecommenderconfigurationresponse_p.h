// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETERECOMMENDERCONFIGURATIONRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteRecommenderConfigurationResponse;

class DeleteRecommenderConfigurationResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteRecommenderConfigurationResponsePrivate(DeleteRecommenderConfigurationResponse * const q);

    void parseDeleteRecommenderConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecommenderConfigurationResponse)
    Q_DISABLE_COPY(DeleteRecommenderConfigurationResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
