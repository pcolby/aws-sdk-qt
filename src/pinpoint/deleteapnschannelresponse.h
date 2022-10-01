// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSCHANNELRESPONSE_H
#define QTAWS_DELETEAPNSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteapnschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteApnsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteApnsChannelResponse(const DeleteApnsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApnsChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApnsChannelResponse)
    Q_DISABLE_COPY(DeleteApnsChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
