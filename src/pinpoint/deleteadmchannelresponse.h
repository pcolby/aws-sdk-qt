// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADMCHANNELRESPONSE_H
#define QTAWS_DELETEADMCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteadmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteAdmChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteAdmChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteAdmChannelResponse(const DeleteAdmChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAdmChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAdmChannelResponse)
    Q_DISABLE_COPY(DeleteAdmChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
