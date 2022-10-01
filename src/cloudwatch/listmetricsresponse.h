// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSRESPONSE_H
#define QTAWS_LISTMETRICSRESPONSE_H

#include "cloudwatchresponse.h"
#include "listmetricsrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT ListMetricsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    ListMetricsResponse(const ListMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMetricsResponse)
    Q_DISABLE_COPY(ListMetricsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
