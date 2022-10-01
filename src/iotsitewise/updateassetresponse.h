// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETRESPONSE_H
#define QTAWS_UPDATEASSETRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updateassetrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateAssetResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdateAssetResponse(const UpdateAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssetResponse)
    Q_DISABLE_COPY(UpdateAssetResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
