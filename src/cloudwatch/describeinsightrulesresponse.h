// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSIGHTRULESRESPONSE_H
#define QTAWS_DESCRIBEINSIGHTRULESRESPONSE_H

#include "cloudwatchresponse.h"
#include "describeinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeInsightRulesResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeInsightRulesResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DescribeInsightRulesResponse(const DescribeInsightRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInsightRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInsightRulesResponse)
    Q_DISABLE_COPY(DescribeInsightRulesResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
