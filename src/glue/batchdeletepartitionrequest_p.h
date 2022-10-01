// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEPARTITIONREQUEST_P_H
#define QTAWS_BATCHDELETEPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "batchdeletepartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchDeletePartitionRequest;

class BatchDeletePartitionRequestPrivate : public GlueRequestPrivate {

public:
    BatchDeletePartitionRequestPrivate(const GlueRequest::Action action,
                                   BatchDeletePartitionRequest * const q);
    BatchDeletePartitionRequestPrivate(const BatchDeletePartitionRequestPrivate &other,
                                   BatchDeletePartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeletePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
