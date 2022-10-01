// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSIGHTSELECTORSRESPONSE_P_H
#define QTAWS_PUTINSIGHTSELECTORSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class PutInsightSelectorsResponse;

class PutInsightSelectorsResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit PutInsightSelectorsResponsePrivate(PutInsightSelectorsResponse * const q);

    void parsePutInsightSelectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutInsightSelectorsResponse)
    Q_DISABLE_COPY(PutInsightSelectorsResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
