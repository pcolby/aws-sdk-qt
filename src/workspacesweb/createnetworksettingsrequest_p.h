// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSETTINGSREQUEST_P_H
#define QTAWS_CREATENETWORKSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "createnetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateNetworkSettingsRequest;

class CreateNetworkSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    CreateNetworkSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   CreateNetworkSettingsRequest * const q);
    CreateNetworkSettingsRequestPrivate(const CreateNetworkSettingsRequestPrivate &other,
                                   CreateNetworkSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
