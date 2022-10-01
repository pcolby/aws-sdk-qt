// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBCHANNELSREQUEST_H
#define QTAWS_LISTSUBCHANNELSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListSubChannelsRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListSubChannelsRequest : public ChimeSdkMessagingRequest {

public:
    ListSubChannelsRequest(const ListSubChannelsRequest &other);
    ListSubChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubChannelsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
