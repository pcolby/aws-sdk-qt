// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_H
#define QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsModeratedByAppInstanceUserRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelsModeratedByAppInstanceUserRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelsModeratedByAppInstanceUserRequest(const ListChannelsModeratedByAppInstanceUserRequest &other);
    ListChannelsModeratedByAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsModeratedByAppInstanceUserRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
