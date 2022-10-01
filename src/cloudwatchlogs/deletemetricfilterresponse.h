// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICFILTERRESPONSE_H
#define QTAWS_DELETEMETRICFILTERRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "deletemetricfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteMetricFilterResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteMetricFilterResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DeleteMetricFilterResponse(const DeleteMetricFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMetricFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMetricFilterResponse)
    Q_DISABLE_COPY(DeleteMetricFilterResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
