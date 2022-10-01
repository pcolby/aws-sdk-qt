// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESRESPONSE_H
#define QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "putchannelmembershippreferencesrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class PutChannelMembershipPreferencesResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT PutChannelMembershipPreferencesResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    PutChannelMembershipPreferencesResponse(const PutChannelMembershipPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutChannelMembershipPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutChannelMembershipPreferencesResponse)
    Q_DISABLE_COPY(PutChannelMembershipPreferencesResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
