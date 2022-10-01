// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERREQUEST_H
#define QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMembershipsForAppInstanceUserRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelMembershipsForAppInstanceUserRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelMembershipsForAppInstanceUserRequest(const ListChannelMembershipsForAppInstanceUserRequest &other);
    ListChannelMembershipsForAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelMembershipsForAppInstanceUserRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
