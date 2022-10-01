// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETMODELRESPONSE_H
#define QTAWS_DELETEASSETMODELRESPONSE_H

#include "iotsitewiseresponse.h"
#include "deleteassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAssetModelResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteAssetModelResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DeleteAssetModelResponse(const DeleteAssetModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssetModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssetModelResponse)
    Q_DISABLE_COPY(DeleteAssetModelResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
