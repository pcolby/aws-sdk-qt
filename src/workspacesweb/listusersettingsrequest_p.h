// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSETTINGSREQUEST_P_H
#define QTAWS_LISTUSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "listusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListUserSettingsRequest;

class ListUserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    ListUserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   ListUserSettingsRequest * const q);
    ListUserSettingsRequestPrivate(const ListUserSettingsRequestPrivate &other,
                                   ListUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
