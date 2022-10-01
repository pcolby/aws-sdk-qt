// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICDATARESPONSE_H
#define QTAWS_GETMETRICDATARESPONSE_H

#include "cloudwatchresponse.h"
#include "getmetricdatarequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricDataResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricDataResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    GetMetricDataResponse(const GetMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricDataResponse)
    Q_DISABLE_COPY(GetMetricDataResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
