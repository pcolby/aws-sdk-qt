// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESERVATIONSRESPONSE_H
#define QTAWS_LISTRESERVATIONSRESPONSE_H

#include "mediaconnectresponse.h"
#include "listreservationsrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListReservationsResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT ListReservationsResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    ListReservationsResponse(const ListReservationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReservationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReservationsResponse)
    Q_DISABLE_COPY(ListReservationsResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
