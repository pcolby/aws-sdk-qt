// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSSANDBOXCHANNELRESPONSE_H
#define QTAWS_DELETEAPNSSANDBOXCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteapnssandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsSandboxChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteApnsSandboxChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteApnsSandboxChannelResponse(const DeleteApnsSandboxChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApnsSandboxChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApnsSandboxChannelResponse)
    Q_DISABLE_COPY(DeleteApnsSandboxChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
