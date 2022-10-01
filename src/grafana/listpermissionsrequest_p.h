// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSREQUEST_P_H
#define QTAWS_LISTPERMISSIONSREQUEST_P_H

#include "grafanarequest_p.h"
#include "listpermissionsrequest.h"

namespace QtAws {
namespace Grafana {

class ListPermissionsRequest;

class ListPermissionsRequestPrivate : public GrafanaRequestPrivate {

public:
    ListPermissionsRequestPrivate(const GrafanaRequest::Action action,
                                   ListPermissionsRequest * const q);
    ListPermissionsRequestPrivate(const ListPermissionsRequestPrivate &other,
                                   ListPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionsRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
