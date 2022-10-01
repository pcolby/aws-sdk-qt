// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREVIEWREPORTRESPONSE_H
#define QTAWS_GETLENSREVIEWREPORTRESPONSE_H

#include "wellarchitectedresponse.h"
#include "getlensreviewreportrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensReviewReportResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT GetLensReviewReportResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    GetLensReviewReportResponse(const GetLensReviewReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLensReviewReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLensReviewReportResponse)
    Q_DISABLE_COPY(GetLensReviewReportResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
