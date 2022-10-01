// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKWORKSPACECONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTSLACKWORKSPACECONFIGURATIONSREQUEST_P_H

#include "supportapprequest_p.h"
#include "listslackworkspaceconfigurationsrequest.h"

namespace QtAws {
namespace SupportApp {

class ListSlackWorkspaceConfigurationsRequest;

class ListSlackWorkspaceConfigurationsRequestPrivate : public SupportAppRequestPrivate {

public:
    ListSlackWorkspaceConfigurationsRequestPrivate(const SupportAppRequest::Action action,
                                   ListSlackWorkspaceConfigurationsRequest * const q);
    ListSlackWorkspaceConfigurationsRequestPrivate(const ListSlackWorkspaceConfigurationsRequestPrivate &other,
                                   ListSlackWorkspaceConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSlackWorkspaceConfigurationsRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
