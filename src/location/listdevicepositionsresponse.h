// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOSITIONSRESPONSE_H
#define QTAWS_LISTDEVICEPOSITIONSRESPONSE_H

#include "locationresponse.h"
#include "listdevicepositionsrequest.h"

namespace QtAws {
namespace Location {

class ListDevicePositionsResponsePrivate;

class QTAWSLOCATION_EXPORT ListDevicePositionsResponse : public LocationResponse {
    Q_OBJECT

public:
    ListDevicePositionsResponse(const ListDevicePositionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDevicePositionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicePositionsResponse)
    Q_DISABLE_COPY(ListDevicePositionsResponse)

};

} // namespace Location
} // namespace QtAws

#endif
