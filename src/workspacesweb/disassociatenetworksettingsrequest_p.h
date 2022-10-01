// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENETWORKSETTINGSREQUEST_P_H
#define QTAWS_DISASSOCIATENETWORKSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "disassociatenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateNetworkSettingsRequest;

class DisassociateNetworkSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DisassociateNetworkSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DisassociateNetworkSettingsRequest * const q);
    DisassociateNetworkSettingsRequestPrivate(const DisassociateNetworkSettingsRequestPrivate &other,
                                   DisassociateNetworkSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
