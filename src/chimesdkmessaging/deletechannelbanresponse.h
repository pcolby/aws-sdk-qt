// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELBANRESPONSE_H
#define QTAWS_DELETECHANNELBANRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "deletechannelbanrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelBanResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelBanResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DeleteChannelBanResponse(const DeleteChannelBanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelBanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelBanResponse)
    Q_DISABLE_COPY(DeleteChannelBanResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
