// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDESTINATIONSRESPONSE_H
#define QTAWS_LISTDESTINATIONSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listdestinationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListDestinationsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListDestinationsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListDestinationsResponse(const ListDestinationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDestinationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDestinationsResponse)
    Q_DISABLE_COPY(ListDestinationsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
