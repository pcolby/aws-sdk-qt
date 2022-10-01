// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKSPACESREQUEST_P_H
#define QTAWS_LISTWORKSPACESREQUEST_P_H

#include "grafanarequest_p.h"
#include "listworkspacesrequest.h"

namespace QtAws {
namespace Grafana {

class ListWorkspacesRequest;

class ListWorkspacesRequestPrivate : public GrafanaRequestPrivate {

public:
    ListWorkspacesRequestPrivate(const GrafanaRequest::Action action,
                                   ListWorkspacesRequest * const q);
    ListWorkspacesRequestPrivate(const ListWorkspacesRequestPrivate &other,
                                   ListWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkspacesRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
