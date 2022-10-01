// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDESTINATIONREQUEST_H
#define QTAWS_DELETEDESTINATIONREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteDestinationRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteDestinationRequest : public CloudWatchLogsRequest {

public:
    DeleteDestinationRequest(const DeleteDestinationRequest &other);
    DeleteDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDestinationRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
