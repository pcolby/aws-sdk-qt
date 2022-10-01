// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGTYPESREQUEST_P_H
#define QTAWS_LISTTHINGTYPESREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingtypesrequest.h"

namespace QtAws {
namespace IoT {

class ListThingTypesRequest;

class ListThingTypesRequestPrivate : public IoTRequestPrivate {

public:
    ListThingTypesRequestPrivate(const IoTRequest::Action action,
                                   ListThingTypesRequest * const q);
    ListThingTypesRequestPrivate(const ListThingTypesRequestPrivate &other,
                                   ListThingTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingTypesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
