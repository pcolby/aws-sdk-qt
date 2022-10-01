// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTALRESPONSE_H
#define QTAWS_UPDATEPORTALRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updateportalrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdatePortalResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdatePortalResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdatePortalResponse(const UpdatePortalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePortalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePortalResponse)
    Q_DISABLE_COPY(UpdatePortalResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
