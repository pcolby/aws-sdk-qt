// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICDATARESPONSE_H
#define QTAWS_PUTMETRICDATARESPONSE_H

#include "cloudwatchresponse.h"
#include "putmetricdatarequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricDataResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutMetricDataResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutMetricDataResponse(const PutMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricDataResponse)
    Q_DISABLE_COPY(PutMetricDataResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
