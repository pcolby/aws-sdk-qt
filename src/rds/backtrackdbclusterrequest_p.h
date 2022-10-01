// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTRACKDBCLUSTERREQUEST_P_H
#define QTAWS_BACKTRACKDBCLUSTERREQUEST_P_H

#include "rdsrequest_p.h"
#include "backtrackdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class BacktrackDBClusterRequest;

class BacktrackDBClusterRequestPrivate : public RdsRequestPrivate {

public:
    BacktrackDBClusterRequestPrivate(const RdsRequest::Action action,
                                   BacktrackDBClusterRequest * const q);
    BacktrackDBClusterRequestPrivate(const BacktrackDBClusterRequestPrivate &other,
                                   BacktrackDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(BacktrackDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
