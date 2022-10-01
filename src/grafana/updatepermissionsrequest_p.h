// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATEPERMISSIONSREQUEST_P_H

#include "grafanarequest_p.h"
#include "updatepermissionsrequest.h"

namespace QtAws {
namespace Grafana {

class UpdatePermissionsRequest;

class UpdatePermissionsRequestPrivate : public GrafanaRequestPrivate {

public:
    UpdatePermissionsRequestPrivate(const GrafanaRequest::Action action,
                                   UpdatePermissionsRequest * const q);
    UpdatePermissionsRequestPrivate(const UpdatePermissionsRequestPrivate &other,
                                   UpdatePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePermissionsRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
