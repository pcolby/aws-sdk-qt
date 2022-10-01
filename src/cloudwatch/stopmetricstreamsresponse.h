// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMETRICSTREAMSRESPONSE_H
#define QTAWS_STOPMETRICSTREAMSRESPONSE_H

#include "cloudwatchresponse.h"
#include "stopmetricstreamsrequest.h"

namespace QtAws {
namespace CloudWatch {

class StopMetricStreamsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT StopMetricStreamsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    StopMetricStreamsResponse(const StopMetricStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopMetricStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMetricStreamsResponse)
    Q_DISABLE_COPY(StopMetricStreamsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
