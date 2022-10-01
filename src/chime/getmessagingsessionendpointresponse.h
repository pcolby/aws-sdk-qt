// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMESSAGINGSESSIONENDPOINTRESPONSE_H
#define QTAWS_GETMESSAGINGSESSIONENDPOINTRESPONSE_H

#include "chimeresponse.h"
#include "getmessagingsessionendpointrequest.h"

namespace QtAws {
namespace Chime {

class GetMessagingSessionEndpointResponsePrivate;

class QTAWSCHIME_EXPORT GetMessagingSessionEndpointResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetMessagingSessionEndpointResponse(const GetMessagingSessionEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMessagingSessionEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMessagingSessionEndpointResponse)
    Q_DISABLE_COPY(GetMessagingSessionEndpointResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
