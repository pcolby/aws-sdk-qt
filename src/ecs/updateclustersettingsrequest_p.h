// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERSETTINGSREQUEST_P_H
#define QTAWS_UPDATECLUSTERSETTINGSREQUEST_P_H

#include "ecsrequest_p.h"
#include "updateclustersettingsrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterSettingsRequest;

class UpdateClusterSettingsRequestPrivate : public EcsRequestPrivate {

public:
    UpdateClusterSettingsRequestPrivate(const EcsRequest::Action action,
                                   UpdateClusterSettingsRequest * const q);
    UpdateClusterSettingsRequestPrivate(const UpdateClusterSettingsRequestPrivate &other,
                                   UpdateClusterSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterSettingsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
