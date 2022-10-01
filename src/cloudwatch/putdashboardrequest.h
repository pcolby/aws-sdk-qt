// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDASHBOARDREQUEST_H
#define QTAWS_PUTDASHBOARDREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutDashboardRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT PutDashboardRequest : public CloudWatchRequest {

public:
    PutDashboardRequest(const PutDashboardRequest &other);
    PutDashboardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDashboardRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
