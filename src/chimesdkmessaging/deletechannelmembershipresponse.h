// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_H
#define QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "deletechannelmembershiprequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelMembershipResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelMembershipResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DeleteChannelMembershipResponse(const DeleteChannelMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelMembershipResponse)
    Q_DISABLE_COPY(DeleteChannelMembershipResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
