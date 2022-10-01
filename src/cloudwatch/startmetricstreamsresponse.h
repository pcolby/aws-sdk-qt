// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMETRICSTREAMSRESPONSE_H
#define QTAWS_STARTMETRICSTREAMSRESPONSE_H

#include "cloudwatchresponse.h"
#include "startmetricstreamsrequest.h"

namespace QtAws {
namespace CloudWatch {

class StartMetricStreamsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT StartMetricStreamsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    StartMetricStreamsResponse(const StartMetricStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMetricStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMetricStreamsResponse)
    Q_DISABLE_COPY(StartMetricStreamsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
