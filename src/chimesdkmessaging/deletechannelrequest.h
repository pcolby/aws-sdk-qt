// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELREQUEST_H
#define QTAWS_DELETECHANNELREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelRequest : public ChimeSdkMessagingRequest {

public:
    DeleteChannelRequest(const DeleteChannelRequest &other);
    DeleteChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
