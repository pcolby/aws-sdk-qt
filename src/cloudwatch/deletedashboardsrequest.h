// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDSREQUEST_H
#define QTAWS_DELETEDASHBOARDSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteDashboardsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteDashboardsRequest : public CloudWatchRequest {

public:
    DeleteDashboardsRequest(const DeleteDashboardsRequest &other);
    DeleteDashboardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDashboardsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
