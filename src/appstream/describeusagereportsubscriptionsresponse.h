// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSRESPONSE_H
#define QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSRESPONSE_H

#include "appstreamresponse.h"
#include "describeusagereportsubscriptionsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeUsageReportSubscriptionsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeUsageReportSubscriptionsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeUsageReportSubscriptionsResponse(const DescribeUsageReportSubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUsageReportSubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUsageReportSubscriptionsResponse)
    Q_DISABLE_COPY(DescribeUsageReportSubscriptionsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
