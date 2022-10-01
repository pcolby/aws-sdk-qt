// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTREAMRESPONSE_H
#define QTAWS_GETMETRICSTREAMRESPONSE_H

#include "cloudwatchresponse.h"
#include "getmetricstreamrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStreamResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricStreamResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    GetMetricStreamResponse(const GetMetricStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricStreamResponse)
    Q_DISABLE_COPY(GetMetricStreamResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
