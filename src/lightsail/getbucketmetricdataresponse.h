// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETMETRICDATARESPONSE_H
#define QTAWS_GETBUCKETMETRICDATARESPONSE_H

#include "lightsailresponse.h"
#include "getbucketmetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketMetricDataResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketMetricDataResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetBucketMetricDataResponse(const GetBucketMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketMetricDataResponse)
    Q_DISABLE_COPY(GetBucketMetricDataResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
