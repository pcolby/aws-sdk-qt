// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_LISTALARMRECOMMENDATIONSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListAlarmRecommendationsResponse;

class ListAlarmRecommendationsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListAlarmRecommendationsResponsePrivate(ListAlarmRecommendationsResponse * const q);

    void parseListAlarmRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAlarmRecommendationsResponse)
    Q_DISABLE_COPY(ListAlarmRecommendationsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
