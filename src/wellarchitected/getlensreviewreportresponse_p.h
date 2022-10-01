// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREVIEWREPORTRESPONSE_P_H
#define QTAWS_GETLENSREVIEWREPORTRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class GetLensReviewReportResponse;

class GetLensReviewReportResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit GetLensReviewReportResponsePrivate(GetLensReviewReportResponse * const q);

    void parseGetLensReviewReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLensReviewReportResponse)
    Q_DISABLE_COPY(GetLensReviewReportResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
