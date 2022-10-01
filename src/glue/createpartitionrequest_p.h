// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONREQUEST_P_H
#define QTAWS_CREATEPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "createpartitionrequest.h"

namespace QtAws {
namespace Glue {

class CreatePartitionRequest;

class CreatePartitionRequestPrivate : public GlueRequestPrivate {

public:
    CreatePartitionRequestPrivate(const GlueRequest::Action action,
                                   CreatePartitionRequest * const q);
    CreatePartitionRequestPrivate(const CreatePartitionRequestPrivate &other,
                                   CreatePartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
