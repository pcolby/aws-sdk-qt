// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETMODELSRESPONSE_H
#define QTAWS_LISTASSETMODELSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listassetmodelsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetModelsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListAssetModelsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListAssetModelsResponse(const ListAssetModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssetModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssetModelsResponse)
    Q_DISABLE_COPY(ListAssetModelsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
