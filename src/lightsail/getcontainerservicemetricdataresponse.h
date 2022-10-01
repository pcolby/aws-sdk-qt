// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEMETRICDATARESPONSE_H
#define QTAWS_GETCONTAINERSERVICEMETRICDATARESPONSE_H

#include "lightsailresponse.h"
#include "getcontainerservicemetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceMetricDataResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServiceMetricDataResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetContainerServiceMetricDataResponse(const GetContainerServiceMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerServiceMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServiceMetricDataResponse)
    Q_DISABLE_COPY(GetContainerServiceMetricDataResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
