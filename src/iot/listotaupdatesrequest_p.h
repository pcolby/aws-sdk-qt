// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOTAUPDATESREQUEST_P_H
#define QTAWS_LISTOTAUPDATESREQUEST_P_H

#include "iotrequest_p.h"
#include "listotaupdatesrequest.h"

namespace QtAws {
namespace IoT {

class ListOTAUpdatesRequest;

class ListOTAUpdatesRequestPrivate : public IoTRequestPrivate {

public:
    ListOTAUpdatesRequestPrivate(const IoTRequest::Action action,
                                   ListOTAUpdatesRequest * const q);
    ListOTAUpdatesRequestPrivate(const ListOTAUpdatesRequestPrivate &other,
                                   ListOTAUpdatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOTAUpdatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
