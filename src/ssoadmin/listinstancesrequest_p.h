// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESREQUEST_P_H
#define QTAWS_LISTINSTANCESREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listinstancesrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListInstancesRequest;

class ListInstancesRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListInstancesRequestPrivate(const SsoAdminRequest::Action action,
                                   ListInstancesRequest * const q);
    ListInstancesRequestPrivate(const ListInstancesRequestPrivate &other,
                                   ListInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstancesRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
