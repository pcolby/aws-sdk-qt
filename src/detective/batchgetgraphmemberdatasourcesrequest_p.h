// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETGRAPHMEMBERDATASOURCESREQUEST_P_H
#define QTAWS_BATCHGETGRAPHMEMBERDATASOURCESREQUEST_P_H

#include "detectiverequest_p.h"
#include "batchgetgraphmemberdatasourcesrequest.h"

namespace QtAws {
namespace Detective {

class BatchGetGraphMemberDatasourcesRequest;

class BatchGetGraphMemberDatasourcesRequestPrivate : public DetectiveRequestPrivate {

public:
    BatchGetGraphMemberDatasourcesRequestPrivate(const DetectiveRequest::Action action,
                                   BatchGetGraphMemberDatasourcesRequest * const q);
    BatchGetGraphMemberDatasourcesRequestPrivate(const BatchGetGraphMemberDatasourcesRequestPrivate &other,
                                   BatchGetGraphMemberDatasourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetGraphMemberDatasourcesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
