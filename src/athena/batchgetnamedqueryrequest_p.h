// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETNAMEDQUERYREQUEST_P_H
#define QTAWS_BATCHGETNAMEDQUERYREQUEST_P_H

#include "athenarequest_p.h"
#include "batchgetnamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class BatchGetNamedQueryRequest;

class BatchGetNamedQueryRequestPrivate : public AthenaRequestPrivate {

public:
    BatchGetNamedQueryRequestPrivate(const AthenaRequest::Action action,
                                   BatchGetNamedQueryRequest * const q);
    BatchGetNamedQueryRequestPrivate(const BatchGetNamedQueryRequestPrivate &other,
                                   BatchGetNamedQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
