// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELMESSAGEREQUEST_H
#define QTAWS_UPDATECHANNELMESSAGEREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelMessageRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT UpdateChannelMessageRequest : public ChimeSdkMessagingRequest {

public:
    UpdateChannelMessageRequest(const UpdateChannelMessageRequest &other);
    UpdateChannelMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
