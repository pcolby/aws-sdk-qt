// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOOLORIGINATIONIDENTITIESREQUEST_P_H
#define QTAWS_LISTPOOLORIGINATIONIDENTITIESREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "listpooloriginationidentitiesrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class ListPoolOriginationIdentitiesRequest;

class ListPoolOriginationIdentitiesRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    ListPoolOriginationIdentitiesRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   ListPoolOriginationIdentitiesRequest * const q);
    ListPoolOriginationIdentitiesRequestPrivate(const ListPoolOriginationIdentitiesRequestPrivate &other,
                                   ListPoolOriginationIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPoolOriginationIdentitiesRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
