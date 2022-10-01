// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRULEREPORTRESPONSE_H
#define QTAWS_GETINSIGHTRULEREPORTRESPONSE_H

#include "cloudwatchresponse.h"
#include "getinsightrulereportrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetInsightRuleReportResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT GetInsightRuleReportResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    GetInsightRuleReportResponse(const GetInsightRuleReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInsightRuleReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightRuleReportResponse)
    Q_DISABLE_COPY(GetInsightRuleReportResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
