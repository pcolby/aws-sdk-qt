// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMODERATORRESPONSE_H
#define QTAWS_DELETECHANNELMODERATORRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "deletechannelmoderatorrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelModeratorResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelModeratorResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DeleteChannelModeratorResponse(const DeleteChannelModeratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelModeratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelModeratorResponse)
    Q_DISABLE_COPY(DeleteChannelModeratorResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
