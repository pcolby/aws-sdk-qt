// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTIMESERIESSERVICESTATISTICSREQUEST_H
#define QTAWS_GETTIMESERIESSERVICESTATISTICSREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetTimeSeriesServiceStatisticsRequestPrivate;

class QTAWSXRAY_EXPORT GetTimeSeriesServiceStatisticsRequest : public XRayRequest {

public:
    GetTimeSeriesServiceStatisticsRequest(const GetTimeSeriesServiceStatisticsRequest &other);
    GetTimeSeriesServiceStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTimeSeriesServiceStatisticsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
