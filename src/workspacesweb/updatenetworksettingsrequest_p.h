// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSETTINGSREQUEST_P_H
#define QTAWS_UPDATENETWORKSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "updatenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateNetworkSettingsRequest;

class UpdateNetworkSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    UpdateNetworkSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   UpdateNetworkSettingsRequest * const q);
    UpdateNetworkSettingsRequestPrivate(const UpdateNetworkSettingsRequestPrivate &other,
                                   UpdateNetworkSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
