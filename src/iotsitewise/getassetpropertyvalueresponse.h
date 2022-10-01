// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUERESPONSE_H
#define QTAWS_GETASSETPROPERTYVALUERESPONSE_H

#include "iotsitewiseresponse.h"
#include "getassetpropertyvaluerequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT GetAssetPropertyValueResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    GetAssetPropertyValueResponse(const GetAssetPropertyValueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssetPropertyValueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetPropertyValueResponse)
    Q_DISABLE_COPY(GetAssetPropertyValueResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
