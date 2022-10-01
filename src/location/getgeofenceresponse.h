// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOFENCERESPONSE_H
#define QTAWS_GETGEOFENCERESPONSE_H

#include "locationresponse.h"
#include "getgeofencerequest.h"

namespace QtAws {
namespace Location {

class GetGeofenceResponsePrivate;

class QTAWSLOCATION_EXPORT GetGeofenceResponse : public LocationResponse {
    Q_OBJECT

public:
    GetGeofenceResponse(const GetGeofenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGeofenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeofenceResponse)
    Q_DISABLE_COPY(GetGeofenceResponse)

};

} // namespace Location
} // namespace QtAws

#endif
