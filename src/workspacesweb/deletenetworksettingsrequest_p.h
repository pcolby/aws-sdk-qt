// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSETTINGSREQUEST_P_H
#define QTAWS_DELETENETWORKSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "deletenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteNetworkSettingsRequest;

class DeleteNetworkSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DeleteNetworkSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DeleteNetworkSettingsRequest * const q);
    DeleteNetworkSettingsRequestPrivate(const DeleteNetworkSettingsRequestPrivate &other,
                                   DeleteNetworkSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
