// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPARTITIONREQUEST_P_H
#define QTAWS_BATCHGETPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgetpartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetPartitionRequest;

class BatchGetPartitionRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetPartitionRequestPrivate(const GlueRequest::Action action,
                                   BatchGetPartitionRequest * const q);
    BatchGetPartitionRequestPrivate(const BatchGetPartitionRequestPrivate &other,
                                   BatchGetPartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
