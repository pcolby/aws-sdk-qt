// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSTREAMREQUEST_H
#define QTAWS_CREATELOGSTREAMREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogStreamRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CreateLogStreamRequest : public CloudWatchLogsRequest {

public:
    CreateLogStreamRequest(const CreateLogStreamRequest &other);
    CreateLogStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogStreamRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
