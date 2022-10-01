// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDSRESPONSE_H
#define QTAWS_DELETEDASHBOARDSRESPONSE_H

#include "cloudwatchresponse.h"
#include "deletedashboardsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteDashboardsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteDashboardsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DeleteDashboardsResponse(const DeleteDashboardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDashboardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDashboardsResponse)
    Q_DISABLE_COPY(DeleteDashboardsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
