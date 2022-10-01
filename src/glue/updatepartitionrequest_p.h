// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTITIONREQUEST_P_H
#define QTAWS_UPDATEPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "updatepartitionrequest.h"

namespace QtAws {
namespace Glue {

class UpdatePartitionRequest;

class UpdatePartitionRequestPrivate : public GlueRequestPrivate {

public:
    UpdatePartitionRequestPrivate(const GlueRequest::Action action,
                                   UpdatePartitionRequest * const q);
    UpdatePartitionRequestPrivate(const UpdatePartitionRequestPrivate &other,
                                   UpdatePartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
