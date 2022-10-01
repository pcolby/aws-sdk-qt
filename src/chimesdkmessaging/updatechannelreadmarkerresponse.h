// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREADMARKERRESPONSE_H
#define QTAWS_UPDATECHANNELREADMARKERRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "updatechannelreadmarkerrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelReadMarkerResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT UpdateChannelReadMarkerResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    UpdateChannelReadMarkerResponse(const UpdateChannelReadMarkerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChannelReadMarkerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelReadMarkerResponse)
    Q_DISABLE_COPY(UpdateChannelReadMarkerResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
