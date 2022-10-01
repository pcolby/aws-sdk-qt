// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERREQUEST_P_H
#define QTAWS_UPDATECLUSTERREQUEST_P_H

#include "ecsrequest_p.h"
#include "updateclusterrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterRequest;

class UpdateClusterRequestPrivate : public EcsRequestPrivate {

public:
    UpdateClusterRequestPrivate(const EcsRequest::Action action,
                                   UpdateClusterRequest * const q);
    UpdateClusterRequestPrivate(const UpdateClusterRequestPrivate &other,
                                   UpdateClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
