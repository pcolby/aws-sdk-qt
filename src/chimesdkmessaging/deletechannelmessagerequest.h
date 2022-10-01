// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMESSAGEREQUEST_H
#define QTAWS_DELETECHANNELMESSAGEREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelMessageRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelMessageRequest : public ChimeSdkMessagingRequest {

public:
    DeleteChannelMessageRequest(const DeleteChannelMessageRequest &other);
    DeleteChannelMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
