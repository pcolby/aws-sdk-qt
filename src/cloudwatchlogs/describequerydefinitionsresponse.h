// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYDEFINITIONSRESPONSE_H
#define QTAWS_DESCRIBEQUERYDEFINITIONSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describequerydefinitionsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueryDefinitionsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeQueryDefinitionsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeQueryDefinitionsResponse(const DescribeQueryDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeQueryDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueryDefinitionsResponse)
    Q_DISABLE_COPY(DescribeQueryDefinitionsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
