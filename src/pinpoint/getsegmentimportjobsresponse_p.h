// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTIMPORTJOBSRESPONSE_P_H
#define QTAWS_GETSEGMENTIMPORTJOBSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentImportJobsResponse;

class GetSegmentImportJobsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSegmentImportJobsResponsePrivate(GetSegmentImportJobsResponse * const q);

    void parseGetSegmentImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentImportJobsResponse)
    Q_DISABLE_COPY(GetSegmentImportJobsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
