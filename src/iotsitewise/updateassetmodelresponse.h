// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETMODELRESPONSE_H
#define QTAWS_UPDATEASSETMODELRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updateassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetModelResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateAssetModelResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdateAssetModelResponse(const UpdateAssetModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssetModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssetModelResponse)
    Q_DISABLE_COPY(UpdateAssetModelResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
