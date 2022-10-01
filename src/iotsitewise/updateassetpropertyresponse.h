// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETPROPERTYRESPONSE_H
#define QTAWS_UPDATEASSETPROPERTYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updateassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetPropertyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateAssetPropertyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdateAssetPropertyResponse(const UpdateAssetPropertyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssetPropertyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssetPropertyResponse)
    Q_DISABLE_COPY(UpdateAssetPropertyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
