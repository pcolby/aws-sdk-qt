// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGERESOURCERECORDSETSREQUEST_P_H
#define QTAWS_CHANGERESOURCERECORDSETSREQUEST_P_H

#include "route53request_p.h"
#include "changeresourcerecordsetsrequest.h"

namespace QtAws {
namespace Route53 {

class ChangeResourceRecordSetsRequest;

class ChangeResourceRecordSetsRequestPrivate : public Route53RequestPrivate {

public:
    ChangeResourceRecordSetsRequestPrivate(const Route53Request::Action action,
                                   ChangeResourceRecordSetsRequest * const q);
    ChangeResourceRecordSetsRequestPrivate(const ChangeResourceRecordSetsRequestPrivate &other,
                                   ChangeResourceRecordSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeResourceRecordSetsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
