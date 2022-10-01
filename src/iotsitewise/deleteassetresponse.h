// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETRESPONSE_H
#define QTAWS_DELETEASSETRESPONSE_H

#include "iotsitewiseresponse.h"
#include "deleteassetrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAssetResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteAssetResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DeleteAssetResponse(const DeleteAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssetResponse)
    Q_DISABLE_COPY(DeleteAssetResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
