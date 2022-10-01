// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENETWORKSETTINGSREQUEST_P_H
#define QTAWS_ASSOCIATENETWORKSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "associatenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateNetworkSettingsRequest;

class AssociateNetworkSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    AssociateNetworkSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   AssociateNetworkSettingsRequest * const q);
    AssociateNetworkSettingsRequestPrivate(const AssociateNetworkSettingsRequestPrivate &other,
                                   AssociateNetworkSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
