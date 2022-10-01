// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGROUPFIELDSREQUEST_H
#define QTAWS_GETLOGGROUPFIELDSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogGroupFieldsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT GetLogGroupFieldsRequest : public CloudWatchLogsRequest {

public:
    GetLogGroupFieldsRequest(const GetLogGroupFieldsRequest &other);
    GetLogGroupFieldsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLogGroupFieldsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
