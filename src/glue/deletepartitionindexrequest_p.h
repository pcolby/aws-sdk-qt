// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTITIONINDEXREQUEST_P_H
#define QTAWS_DELETEPARTITIONINDEXREQUEST_P_H

#include "gluerequest_p.h"
#include "deletepartitionindexrequest.h"

namespace QtAws {
namespace Glue {

class DeletePartitionIndexRequest;

class DeletePartitionIndexRequestPrivate : public GlueRequestPrivate {

public:
    DeletePartitionIndexRequestPrivate(const GlueRequest::Action action,
                                   DeletePartitionIndexRequest * const q);
    DeletePartitionIndexRequestPrivate(const DeletePartitionIndexRequestPrivate &other,
                                   DeletePartitionIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePartitionIndexRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
