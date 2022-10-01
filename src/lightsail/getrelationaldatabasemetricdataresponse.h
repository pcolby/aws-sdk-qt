// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEMETRICDATARESPONSE_H
#define QTAWS_GETRELATIONALDATABASEMETRICDATARESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabasemetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseMetricDataResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseMetricDataResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseMetricDataResponse(const GetRelationalDatabaseMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseMetricDataResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseMetricDataResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
