// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGROUPREQUEST_H
#define QTAWS_CREATELOGGROUPREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogGroupRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CreateLogGroupRequest : public CloudWatchLogsRequest {

public:
    CreateLogGroupRequest(const CreateLogGroupRequest &other);
    CreateLogGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
