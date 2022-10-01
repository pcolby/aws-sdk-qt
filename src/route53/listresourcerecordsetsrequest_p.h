// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCERECORDSETSREQUEST_P_H
#define QTAWS_LISTRESOURCERECORDSETSREQUEST_P_H

#include "route53request_p.h"
#include "listresourcerecordsetsrequest.h"

namespace QtAws {
namespace Route53 {

class ListResourceRecordSetsRequest;

class ListResourceRecordSetsRequestPrivate : public Route53RequestPrivate {

public:
    ListResourceRecordSetsRequestPrivate(const Route53Request::Action action,
                                   ListResourceRecordSetsRequest * const q);
    ListResourceRecordSetsRequestPrivate(const ListResourceRecordSetsRequestPrivate &other,
                                   ListResourceRecordSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceRecordSetsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
