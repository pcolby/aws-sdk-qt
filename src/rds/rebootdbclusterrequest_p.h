// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBCLUSTERREQUEST_P_H
#define QTAWS_REBOOTDBCLUSTERREQUEST_P_H

#include "rdsrequest_p.h"
#include "rebootdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class RebootDBClusterRequest;

class RebootDBClusterRequestPrivate : public RdsRequestPrivate {

public:
    RebootDBClusterRequestPrivate(const RdsRequest::Action action,
                                   RebootDBClusterRequest * const q);
    RebootDBClusterRequestPrivate(const RebootDBClusterRequestPrivate &other,
                                   RebootDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
