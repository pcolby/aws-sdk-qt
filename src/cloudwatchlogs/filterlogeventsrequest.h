// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FILTERLOGEVENTSREQUEST_H
#define QTAWS_FILTERLOGEVENTSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class FilterLogEventsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT FilterLogEventsRequest : public CloudWatchLogsRequest {

public:
    FilterLogEventsRequest(const FilterLogEventsRequest &other);
    FilterLogEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FilterLogEventsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
