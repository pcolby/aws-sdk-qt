// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONMETRICDATARESPONSE_H
#define QTAWS_GETDISTRIBUTIONMETRICDATARESPONSE_H

#include "lightsailresponse.h"
#include "getdistributionmetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionMetricDataResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDistributionMetricDataResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDistributionMetricDataResponse(const GetDistributionMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDistributionMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionMetricDataResponse)
    Q_DISABLE_COPY(GetDistributionMetricDataResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
