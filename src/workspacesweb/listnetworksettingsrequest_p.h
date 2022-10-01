// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSETTINGSREQUEST_P_H
#define QTAWS_LISTNETWORKSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "listnetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListNetworkSettingsRequest;

class ListNetworkSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    ListNetworkSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   ListNetworkSettingsRequest * const q);
    ListNetworkSettingsRequestPrivate(const ListNetworkSettingsRequestPrivate &other,
                                   ListNetworkSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
