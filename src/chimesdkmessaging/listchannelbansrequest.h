// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELBANSREQUEST_H
#define QTAWS_LISTCHANNELBANSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelBansRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelBansRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelBansRequest(const ListChannelBansRequest &other);
    ListChannelBansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelBansRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
