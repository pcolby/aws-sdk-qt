// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDREQUEST_H
#define QTAWS_GETDASHBOARDREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetDashboardRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT GetDashboardRequest : public CloudWatchRequest {

public:
    GetDashboardRequest(const GetDashboardRequest &other);
    GetDashboardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDashboardRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
