// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONREQUEST_H
#define QTAWS_PUTDESTINATIONREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutDestinationRequest : public CloudWatchLogsRequest {

public:
    PutDestinationRequest(const PutDestinationRequest &other);
    PutDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDestinationRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
