// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIDESTINATIONSRESPONSE_H
#define QTAWS_LISTAPIDESTINATIONSRESPONSE_H

#include "eventbridgeresponse.h"
#include "listapidestinationsrequest.h"

namespace QtAws {
namespace EventBridge {

class ListApiDestinationsResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT ListApiDestinationsResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    ListApiDestinationsResponse(const ListApiDestinationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApiDestinationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApiDestinationsResponse)
    Q_DISABLE_COPY(ListApiDestinationsResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
