// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTITIONREQUEST_P_H
#define QTAWS_DELETEPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "deletepartitionrequest.h"

namespace QtAws {
namespace Glue {

class DeletePartitionRequest;

class DeletePartitionRequestPrivate : public GlueRequestPrivate {

public:
    DeletePartitionRequestPrivate(const GlueRequest::Action action,
                                   DeletePartitionRequest * const q);
    DeletePartitionRequestPrivate(const DeletePartitionRequestPrivate &other,
                                   DeletePartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
