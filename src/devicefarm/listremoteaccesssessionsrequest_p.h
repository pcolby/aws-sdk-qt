// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREMOTEACCESSSESSIONSREQUEST_P_H
#define QTAWS_LISTREMOTEACCESSSESSIONSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listremoteaccesssessionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListRemoteAccessSessionsRequest;

class ListRemoteAccessSessionsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListRemoteAccessSessionsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListRemoteAccessSessionsRequest * const q);
    ListRemoteAccessSessionsRequestPrivate(const ListRemoteAccessSessionsRequestPrivate &other,
                                   ListRemoteAccessSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRemoteAccessSessionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
