// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTHORIZERSREQUEST_P_H
#define QTAWS_LISTAUTHORIZERSREQUEST_P_H

#include "iotrequest_p.h"
#include "listauthorizersrequest.h"

namespace QtAws {
namespace IoT {

class ListAuthorizersRequest;

class ListAuthorizersRequestPrivate : public IoTRequestPrivate {

public:
    ListAuthorizersRequestPrivate(const IoTRequest::Action action,
                                   ListAuthorizersRequest * const q);
    ListAuthorizersRequestPrivate(const ListAuthorizersRequestPrivate &other,
                                   ListAuthorizersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAuthorizersRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
