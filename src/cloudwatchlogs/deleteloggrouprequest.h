// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGROUPREQUEST_H
#define QTAWS_DELETELOGGROUPREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogGroupRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteLogGroupRequest : public CloudWatchLogsRequest {

public:
    DeleteLogGroupRequest(const DeleteLogGroupRequest &other);
    DeleteLogGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
