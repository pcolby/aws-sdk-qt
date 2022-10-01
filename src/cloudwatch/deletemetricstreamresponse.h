// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICSTREAMRESPONSE_H
#define QTAWS_DELETEMETRICSTREAMRESPONSE_H

#include "cloudwatchresponse.h"
#include "deletemetricstreamrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteMetricStreamResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteMetricStreamResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DeleteMetricStreamResponse(const DeleteMetricStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMetricStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMetricStreamResponse)
    Q_DISABLE_COPY(DeleteMetricStreamResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
