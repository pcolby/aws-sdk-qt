// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYRESPONSE_H
#define QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "associatetimeseriestoassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateTimeSeriesToAssetPropertyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT AssociateTimeSeriesToAssetPropertyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    AssociateTimeSeriesToAssetPropertyResponse(const AssociateTimeSeriesToAssetPropertyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTimeSeriesToAssetPropertyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTimeSeriesToAssetPropertyResponse)
    Q_DISABLE_COPY(AssociateTimeSeriesToAssetPropertyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
