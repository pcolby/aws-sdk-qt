// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSCHANNELRESPONSE_H
#define QTAWS_UPDATEAPNSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updateapnschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateApnsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateApnsChannelResponse(const UpdateApnsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApnsChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApnsChannelResponse)
    Q_DISABLE_COPY(UpdateApnsChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
