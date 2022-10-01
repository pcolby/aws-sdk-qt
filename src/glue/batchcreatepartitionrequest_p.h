// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEPARTITIONREQUEST_P_H
#define QTAWS_BATCHCREATEPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "batchcreatepartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchCreatePartitionRequest;

class BatchCreatePartitionRequestPrivate : public GlueRequestPrivate {

public:
    BatchCreatePartitionRequestPrivate(const GlueRequest::Action action,
                                   BatchCreatePartitionRequest * const q);
    BatchCreatePartitionRequestPrivate(const BatchCreatePartitionRequestPrivate &other,
                                   BatchCreatePartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCreatePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
