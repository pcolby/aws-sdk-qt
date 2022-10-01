// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMEMBERSHIPREQUEST_H
#define QTAWS_DELETECHANNELMEMBERSHIPREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelMembershipRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelMembershipRequest : public ChimeSdkMessagingRequest {

public:
    DeleteChannelMembershipRequest(const DeleteChannelMembershipRequest &other);
    DeleteChannelMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelMembershipRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
