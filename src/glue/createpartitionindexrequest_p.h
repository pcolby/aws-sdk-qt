// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONINDEXREQUEST_P_H
#define QTAWS_CREATEPARTITIONINDEXREQUEST_P_H

#include "gluerequest_p.h"
#include "createpartitionindexrequest.h"

namespace QtAws {
namespace Glue {

class CreatePartitionIndexRequest;

class CreatePartitionIndexRequestPrivate : public GlueRequestPrivate {

public:
    CreatePartitionIndexRequestPrivate(const GlueRequest::Action action,
                                   CreatePartitionIndexRequest * const q);
    CreatePartitionIndexRequestPrivate(const CreatePartitionIndexRequestPrivate &other,
                                   CreatePartitionIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePartitionIndexRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
