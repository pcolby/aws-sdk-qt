// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYAGGREGATESRESPONSE_H
#define QTAWS_GETASSETPROPERTYAGGREGATESRESPONSE_H

#include "iotsitewiseresponse.h"
#include "getassetpropertyaggregatesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyAggregatesResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT GetAssetPropertyAggregatesResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    GetAssetPropertyAggregatesResponse(const GetAssetPropertyAggregatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssetPropertyAggregatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetPropertyAggregatesResponse)
    Q_DISABLE_COPY(GetAssetPropertyAggregatesResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
