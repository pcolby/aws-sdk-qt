// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMEMBERSHIPPREFERENCESREQUEST_H
#define QTAWS_GETCHANNELMEMBERSHIPPREFERENCESREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMembershipPreferencesRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT GetChannelMembershipPreferencesRequest : public ChimeSdkMessagingRequest {

public:
    GetChannelMembershipPreferencesRequest(const GetChannelMembershipPreferencesRequest &other);
    GetChannelMembershipPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelMembershipPreferencesRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
