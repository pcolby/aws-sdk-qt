// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESRESPONSE_H
#define QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESRESPONSE_H

#include "iotsitewiseresponse.h"
#include "getinterpolatedassetpropertyvaluesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetInterpolatedAssetPropertyValuesResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT GetInterpolatedAssetPropertyValuesResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    GetInterpolatedAssetPropertyValuesResponse(const GetInterpolatedAssetPropertyValuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInterpolatedAssetPropertyValuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInterpolatedAssetPropertyValuesResponse)
    Q_DISABLE_COPY(GetInterpolatedAssetPropertyValuesResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
