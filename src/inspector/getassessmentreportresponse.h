// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTRESPONSE_H
#define QTAWS_GETASSESSMENTREPORTRESPONSE_H

#include "inspectorresponse.h"
#include "getassessmentreportrequest.h"

namespace QtAws {
namespace Inspector {

class GetAssessmentReportResponsePrivate;

class QTAWSINSPECTOR_EXPORT GetAssessmentReportResponse : public InspectorResponse {
    Q_OBJECT

public:
    GetAssessmentReportResponse(const GetAssessmentReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssessmentReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentReportResponse)
    Q_DISABLE_COPY(GetAssessmentReportResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
