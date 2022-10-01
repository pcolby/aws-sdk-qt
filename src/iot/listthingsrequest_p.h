// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSREQUEST_P_H
#define QTAWS_LISTTHINGSREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingsrequest.h"

namespace QtAws {
namespace IoT {

class ListThingsRequest;

class ListThingsRequestPrivate : public IoTRequestPrivate {

public:
    ListThingsRequestPrivate(const IoTRequest::Action action,
                                   ListThingsRequest * const q);
    ListThingsRequestPrivate(const ListThingsRequestPrivate &other,
                                   ListThingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
