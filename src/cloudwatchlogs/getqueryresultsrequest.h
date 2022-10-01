// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYRESULTSREQUEST_H
#define QTAWS_GETQUERYRESULTSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetQueryResultsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT GetQueryResultsRequest : public CloudWatchLogsRequest {

public:
    GetQueryResultsRequest(const GetQueryResultsRequest &other);
    GetQueryResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryResultsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
