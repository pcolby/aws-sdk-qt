// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESREQUEST_H
#define QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class PutChannelMembershipPreferencesRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT PutChannelMembershipPreferencesRequest : public ChimeSdkMessagingRequest {

public:
    PutChannelMembershipPreferencesRequest(const PutChannelMembershipPreferencesRequest &other);
    PutChannelMembershipPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutChannelMembershipPreferencesRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
