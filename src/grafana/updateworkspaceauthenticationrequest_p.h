// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEAUTHENTICATIONREQUEST_P_H
#define QTAWS_UPDATEWORKSPACEAUTHENTICATIONREQUEST_P_H

#include "grafanarequest_p.h"
#include "updateworkspaceauthenticationrequest.h"

namespace QtAws {
namespace Grafana {

class UpdateWorkspaceAuthenticationRequest;

class UpdateWorkspaceAuthenticationRequestPrivate : public GrafanaRequestPrivate {

public:
    UpdateWorkspaceAuthenticationRequestPrivate(const GrafanaRequest::Action action,
                                   UpdateWorkspaceAuthenticationRequest * const q);
    UpdateWorkspaceAuthenticationRequestPrivate(const UpdateWorkspaceAuthenticationRequestPrivate &other,
                                   UpdateWorkspaceAuthenticationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceAuthenticationRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
