// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTEXPORTJOBSRESPONSE_P_H
#define QTAWS_GETSEGMENTEXPORTJOBSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentExportJobsResponse;

class GetSegmentExportJobsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSegmentExportJobsResponsePrivate(GetSegmentExportJobsResponse * const q);

    void parseGetSegmentExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentExportJobsResponse)
    Q_DISABLE_COPY(GetSegmentExportJobsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
