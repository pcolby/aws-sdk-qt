// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLACKWORKSPACECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETESLACKWORKSPACECONFIGURATIONREQUEST_P_H

#include "supportapprequest_p.h"
#include "deleteslackworkspaceconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class DeleteSlackWorkspaceConfigurationRequest;

class DeleteSlackWorkspaceConfigurationRequestPrivate : public SupportAppRequestPrivate {

public:
    DeleteSlackWorkspaceConfigurationRequestPrivate(const SupportAppRequest::Action action,
                                   DeleteSlackWorkspaceConfigurationRequest * const q);
    DeleteSlackWorkspaceConfigurationRequestPrivate(const DeleteSlackWorkspaceConfigurationRequestPrivate &other,
                                   DeleteSlackWorkspaceConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSlackWorkspaceConfigurationRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
