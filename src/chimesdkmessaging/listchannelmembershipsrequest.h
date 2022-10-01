// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSREQUEST_H
#define QTAWS_LISTCHANNELMEMBERSHIPSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMembershipsRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelMembershipsRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelMembershipsRequest(const ListChannelMembershipsRequest &other);
    ListChannelMembershipsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelMembershipsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
