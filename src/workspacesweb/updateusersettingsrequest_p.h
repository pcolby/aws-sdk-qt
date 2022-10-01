// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSETTINGSREQUEST_P_H
#define QTAWS_UPDATEUSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "updateusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateUserSettingsRequest;

class UpdateUserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    UpdateUserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   UpdateUserSettingsRequest * const q);
    UpdateUserSettingsRequestPrivate(const UpdateUserSettingsRequestPrivate &other,
                                   UpdateUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
