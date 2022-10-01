// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTTYPESREQUEST_P_H
#define QTAWS_LISTCOMPONENTTYPESREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "listcomponenttypesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListComponentTypesRequest;

class ListComponentTypesRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    ListComponentTypesRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   ListComponentTypesRequest * const q);
    ListComponentTypesRequestPrivate(const ListComponentTypesRequestPrivate &other,
                                   ListComponentTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentTypesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
