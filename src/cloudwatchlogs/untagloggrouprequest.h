// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGLOGGROUPREQUEST_H
#define QTAWS_UNTAGLOGGROUPREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class UntagLogGroupRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT UntagLogGroupRequest : public CloudWatchLogsRequest {

public:
    UntagLogGroupRequest(const UntagLogGroupRequest &other);
    UntagLogGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
