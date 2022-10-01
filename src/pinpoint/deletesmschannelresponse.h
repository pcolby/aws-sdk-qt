// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSCHANNELRESPONSE_H
#define QTAWS_DELETESMSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deletesmschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteSmsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteSmsChannelResponse(const DeleteSmsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSmsChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSmsChannelResponse)
    Q_DISABLE_COPY(DeleteSmsChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
