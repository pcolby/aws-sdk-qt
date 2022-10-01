// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPARTITIONREQUEST_P_H
#define QTAWS_BATCHUPDATEPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "batchupdatepartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchUpdatePartitionRequest;

class BatchUpdatePartitionRequestPrivate : public GlueRequestPrivate {

public:
    BatchUpdatePartitionRequestPrivate(const GlueRequest::Action action,
                                   BatchUpdatePartitionRequest * const q);
    BatchUpdatePartitionRequestPrivate(const BatchUpdatePartitionRequestPrivate &other,
                                   BatchUpdatePartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdatePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
