// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICSTREAMRESPONSE_H
#define QTAWS_PUTMETRICSTREAMRESPONSE_H

#include "cloudwatchresponse.h"
#include "putmetricstreamrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricStreamResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutMetricStreamResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutMetricStreamResponse(const PutMetricStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetricStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricStreamResponse)
    Q_DISABLE_COPY(PutMetricStreamResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
