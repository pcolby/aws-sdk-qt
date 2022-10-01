// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSCHANNELRESPONSE_H
#define QTAWS_GETAPNSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getapnschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetApnsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetApnsChannelResponse(const GetApnsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApnsChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApnsChannelResponse)
    Q_DISABLE_COPY(GetApnsChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
