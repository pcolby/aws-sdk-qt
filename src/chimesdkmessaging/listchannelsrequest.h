// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSREQUEST_H
#define QTAWS_LISTCHANNELSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelsRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelsRequest(const ListChannelsRequest &other);
    ListChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
