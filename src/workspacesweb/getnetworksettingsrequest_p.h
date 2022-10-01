// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSETTINGSREQUEST_P_H
#define QTAWS_GETNETWORKSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "getnetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetNetworkSettingsRequest;

class GetNetworkSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetNetworkSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetNetworkSettingsRequest * const q);
    GetNetworkSettingsRequestPrivate(const GetNetworkSettingsRequestPrivate &other,
                                   GetNetworkSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
