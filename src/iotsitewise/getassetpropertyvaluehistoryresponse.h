// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUEHISTORYRESPONSE_H
#define QTAWS_GETASSETPROPERTYVALUEHISTORYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "getassetpropertyvaluehistoryrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueHistoryResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT GetAssetPropertyValueHistoryResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    GetAssetPropertyValueHistoryResponse(const GetAssetPropertyValueHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssetPropertyValueHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetPropertyValueHistoryResponse)
    Q_DISABLE_COPY(GetAssetPropertyValueHistoryResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
