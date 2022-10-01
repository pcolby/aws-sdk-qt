// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSELECTORSRESPONSE_P_H
#define QTAWS_GETINSIGHTSELECTORSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class GetInsightSelectorsResponse;

class GetInsightSelectorsResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit GetInsightSelectorsResponsePrivate(GetInsightSelectorsResponse * const q);

    void parseGetInsightSelectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightSelectorsResponse)
    Q_DISABLE_COPY(GetInsightSelectorsResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
