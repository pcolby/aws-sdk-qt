// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETMEMBERSHIPDATASOURCESREQUEST_P_H
#define QTAWS_BATCHGETMEMBERSHIPDATASOURCESREQUEST_P_H

#include "detectiverequest_p.h"
#include "batchgetmembershipdatasourcesrequest.h"

namespace QtAws {
namespace Detective {

class BatchGetMembershipDatasourcesRequest;

class BatchGetMembershipDatasourcesRequestPrivate : public DetectiveRequestPrivate {

public:
    BatchGetMembershipDatasourcesRequestPrivate(const DetectiveRequest::Action action,
                                   BatchGetMembershipDatasourcesRequest * const q);
    BatchGetMembershipDatasourcesRequestPrivate(const BatchGetMembershipDatasourcesRequestPrivate &other,
                                   BatchGetMembershipDatasourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetMembershipDatasourcesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
