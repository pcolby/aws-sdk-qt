// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEREQUEST_P_H
#define QTAWS_DELETEWORKSPACEREQUEST_P_H

#include "grafanarequest_p.h"
#include "deleteworkspacerequest.h"

namespace QtAws {
namespace Grafana {

class DeleteWorkspaceRequest;

class DeleteWorkspaceRequestPrivate : public GrafanaRequestPrivate {

public:
    DeleteWorkspaceRequestPrivate(const GrafanaRequest::Action action,
                                   DeleteWorkspaceRequest * const q);
    DeleteWorkspaceRequestPrivate(const DeleteWorkspaceRequestPrivate &other,
                                   DeleteWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
