// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTDEFINITIONSRESPONSE_H
#define QTAWS_DESCRIBEREPORTDEFINITIONSRESPONSE_H

#include "costandusagereportresponse.h"
#include "describereportdefinitionsrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class DescribeReportDefinitionsResponsePrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT DescribeReportDefinitionsResponse : public CostandUsageReportResponse {
    Q_OBJECT

public:
    DescribeReportDefinitionsResponse(const DescribeReportDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReportDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportDefinitionsResponse)
    Q_DISABLE_COPY(DescribeReportDefinitionsResponse)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
