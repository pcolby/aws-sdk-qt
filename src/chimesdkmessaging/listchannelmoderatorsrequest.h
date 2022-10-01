// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMODERATORSREQUEST_H
#define QTAWS_LISTCHANNELMODERATORSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelModeratorsRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelModeratorsRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelModeratorsRequest(const ListChannelModeratorsRequest &other);
    ListChannelModeratorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelModeratorsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
