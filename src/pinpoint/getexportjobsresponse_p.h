// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTJOBSRESPONSE_P_H
#define QTAWS_GETEXPORTJOBSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetExportJobsResponse;

class GetExportJobsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetExportJobsResponsePrivate(GetExportJobsResponse * const q);

    void parseGetExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExportJobsResponse)
    Q_DISABLE_COPY(GetExportJobsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
