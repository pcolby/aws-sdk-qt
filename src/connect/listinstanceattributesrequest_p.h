// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEATTRIBUTESREQUEST_P_H
#define QTAWS_LISTINSTANCEATTRIBUTESREQUEST_P_H

#include "connectrequest_p.h"
#include "listinstanceattributesrequest.h"

namespace QtAws {
namespace Connect {

class ListInstanceAttributesRequest;

class ListInstanceAttributesRequestPrivate : public ConnectRequestPrivate {

public:
    ListInstanceAttributesRequestPrivate(const ConnectRequest::Action action,
                                   ListInstanceAttributesRequest * const q);
    ListInstanceAttributesRequestPrivate(const ListInstanceAttributesRequestPrivate &other,
                                   ListInstanceAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceAttributesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
