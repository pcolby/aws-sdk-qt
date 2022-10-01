// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADMCHANNELRESPONSE_H
#define QTAWS_UPDATEADMCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updateadmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateAdmChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateAdmChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateAdmChannelResponse(const UpdateAdmChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAdmChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAdmChannelResponse)
    Q_DISABLE_COPY(UpdateAdmChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
