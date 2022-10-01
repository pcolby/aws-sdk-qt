// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERREQUEST_P_H
#define QTAWS_DELETEDBCLUSTERREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletedbclusterrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterRequest;

class DeleteDBClusterRequestPrivate : public RdsRequestPrivate {

public:
    DeleteDBClusterRequestPrivate(const RdsRequest::Action action,
                                   DeleteDBClusterRequest * const q);
    DeleteDBClusterRequestPrivate(const DeleteDBClusterRequestPrivate &other,
                                   DeleteDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
