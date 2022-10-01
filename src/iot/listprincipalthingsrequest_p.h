// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALTHINGSREQUEST_P_H
#define QTAWS_LISTPRINCIPALTHINGSREQUEST_P_H

#include "iotrequest_p.h"
#include "listprincipalthingsrequest.h"

namespace QtAws {
namespace IoT {

class ListPrincipalThingsRequest;

class ListPrincipalThingsRequestPrivate : public IoTRequestPrivate {

public:
    ListPrincipalThingsRequestPrivate(const IoTRequest::Action action,
                                   ListPrincipalThingsRequest * const q);
    ListPrincipalThingsRequestPrivate(const ListPrincipalThingsRequestPrivate &other,
                                   ListPrincipalThingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPrincipalThingsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
