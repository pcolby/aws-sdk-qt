// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGELIMITSREQUEST_P_H
#define QTAWS_LISTUSAGELIMITSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "listusagelimitsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListUsageLimitsRequest;

class ListUsageLimitsRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    ListUsageLimitsRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   ListUsageLimitsRequest * const q);
    ListUsageLimitsRequestPrivate(const ListUsageLimitsRequestPrivate &other,
                                   ListUsageLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUsageLimitsRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
