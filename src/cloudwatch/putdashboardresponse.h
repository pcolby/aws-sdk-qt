// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDASHBOARDRESPONSE_H
#define QTAWS_PUTDASHBOARDRESPONSE_H

#include "cloudwatchresponse.h"
#include "putdashboardrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutDashboardResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutDashboardResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutDashboardResponse(const PutDashboardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDashboardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDashboardResponse)
    Q_DISABLE_COPY(PutDashboardResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
