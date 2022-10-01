// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETRESPONSE_H
#define QTAWS_CREATEASSETRESPONSE_H

#include "iotsitewiseresponse.h"
#include "createassetrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT CreateAssetResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    CreateAssetResponse(const CreateAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssetResponse)
    Q_DISABLE_COPY(CreateAssetResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
