// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALCLUSTERREQUEST_P_H
#define QTAWS_CREATEGLOBALCLUSTERREQUEST_P_H

#include "rdsrequest_p.h"
#include "createglobalclusterrequest.h"

namespace QtAws {
namespace Rds {

class CreateGlobalClusterRequest;

class CreateGlobalClusterRequestPrivate : public RdsRequestPrivate {

public:
    CreateGlobalClusterRequestPrivate(const RdsRequest::Action action,
                                   CreateGlobalClusterRequest * const q);
    CreateGlobalClusterRequestPrivate(const CreateGlobalClusterRequestPrivate &other,
                                   CreateGlobalClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGlobalClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
