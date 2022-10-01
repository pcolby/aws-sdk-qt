// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARCHIVEREQUEST_H
#define QTAWS_DESCRIBEARCHIVEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeArchiveRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeArchiveRequest : public CloudWatchEventsRequest {

public:
    DescribeArchiveRequest(const DescribeArchiveRequest &other);
    DescribeArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeArchiveRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
