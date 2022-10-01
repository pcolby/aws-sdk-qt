// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMODERATORREQUEST_H
#define QTAWS_DELETECHANNELMODERATORREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelModeratorRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelModeratorRequest : public ChimeSdkMessagingRequest {

public:
    DeleteChannelModeratorRequest(const DeleteChannelModeratorRequest &other);
    DeleteChannelModeratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelModeratorRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
