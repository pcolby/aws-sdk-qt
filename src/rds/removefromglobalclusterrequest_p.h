// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFROMGLOBALCLUSTERREQUEST_P_H
#define QTAWS_REMOVEFROMGLOBALCLUSTERREQUEST_P_H

#include "rdsrequest_p.h"
#include "removefromglobalclusterrequest.h"

namespace QtAws {
namespace Rds {

class RemoveFromGlobalClusterRequest;

class RemoveFromGlobalClusterRequestPrivate : public RdsRequestPrivate {

public:
    RemoveFromGlobalClusterRequestPrivate(const RdsRequest::Action action,
                                   RemoveFromGlobalClusterRequest * const q);
    RemoveFromGlobalClusterRequestPrivate(const RemoveFromGlobalClusterRequestPrivate &other,
                                   RemoveFromGlobalClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFromGlobalClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
