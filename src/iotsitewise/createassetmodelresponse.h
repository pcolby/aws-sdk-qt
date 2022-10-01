// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETMODELRESPONSE_H
#define QTAWS_CREATEASSETMODELRESPONSE_H

#include "iotsitewiseresponse.h"
#include "createassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetModelResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT CreateAssetModelResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    CreateAssetModelResponse(const CreateAssetModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssetModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssetModelResponse)
    Q_DISABLE_COPY(CreateAssetModelResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
