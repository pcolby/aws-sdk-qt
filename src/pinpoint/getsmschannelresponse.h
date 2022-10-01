// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSCHANNELRESPONSE_H
#define QTAWS_GETSMSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getsmschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetSmsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetSmsChannelResponse(const GetSmsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSmsChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSmsChannelResponse)
    Q_DISABLE_COPY(GetSmsChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
