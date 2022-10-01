// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERSETTINGSREQUEST_P_H
#define QTAWS_GETUSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "getusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetUserSettingsRequest;

class GetUserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetUserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetUserSettingsRequest * const q);
    GetUserSettingsRequestPrivate(const GetUserSettingsRequestPrivate &other,
                                   GetUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
