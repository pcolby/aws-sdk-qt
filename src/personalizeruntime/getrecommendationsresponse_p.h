// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_GETRECOMMENDATIONSRESPONSE_P_H

#include "personalizeruntimeresponse_p.h"

namespace QtAws {
namespace PersonalizeRuntime {

class GetRecommendationsResponse;

class GetRecommendationsResponsePrivate : public PersonalizeRuntimeResponsePrivate {

public:

    explicit GetRecommendationsResponsePrivate(GetRecommendationsResponse * const q);

    void parseGetRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecommendationsResponse)
    Q_DISABLE_COPY(GetRecommendationsResponsePrivate)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
