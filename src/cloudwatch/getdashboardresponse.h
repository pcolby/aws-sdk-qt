// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDRESPONSE_H
#define QTAWS_GETDASHBOARDRESPONSE_H

#include "cloudwatchresponse.h"
#include "getdashboardrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetDashboardResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT GetDashboardResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    GetDashboardResponse(const GetDashboardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDashboardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDashboardResponse)
    Q_DISABLE_COPY(GetDashboardResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
