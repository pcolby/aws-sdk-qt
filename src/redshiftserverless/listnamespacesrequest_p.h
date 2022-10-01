// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMESPACESREQUEST_P_H
#define QTAWS_LISTNAMESPACESREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "listnamespacesrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListNamespacesRequest;

class ListNamespacesRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    ListNamespacesRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   ListNamespacesRequest * const q);
    ListNamespacesRequestPrivate(const ListNamespacesRequestPrivate &other,
                                   ListNamespacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNamespacesRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
