// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDEMBEDURLRESPONSE_P_H
#define QTAWS_GETDASHBOARDEMBEDURLRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class GetDashboardEmbedUrlResponse;

class GetDashboardEmbedUrlResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit GetDashboardEmbedUrlResponsePrivate(GetDashboardEmbedUrlResponse * const q);

    void parseGetDashboardEmbedUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDashboardEmbedUrlResponse)
    Q_DISABLE_COPY(GetDashboardEmbedUrlResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
