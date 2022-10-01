// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGLOGGROUPREQUEST_H
#define QTAWS_TAGLOGGROUPREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class TagLogGroupRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT TagLogGroupRequest : public CloudWatchLogsRequest {

public:
    TagLogGroupRequest(const TagLogGroupRequest &other);
    TagLogGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
