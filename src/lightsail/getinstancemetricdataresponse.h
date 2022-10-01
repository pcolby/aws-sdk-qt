// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEMETRICDATARESPONSE_H
#define QTAWS_GETINSTANCEMETRICDATARESPONSE_H

#include "lightsailresponse.h"
#include "getinstancemetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceMetricDataResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceMetricDataResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstanceMetricDataResponse(const GetInstanceMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceMetricDataResponse)
    Q_DISABLE_COPY(GetInstanceMetricDataResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
