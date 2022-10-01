// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERSETTINGSREQUEST_P_H
#define QTAWS_DELETEUSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "deleteusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteUserSettingsRequest;

class DeleteUserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DeleteUserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DeleteUserSettingsRequest * const q);
    DeleteUserSettingsRequestPrivate(const DeleteUserSettingsRequestPrivate &other,
                                   DeleteUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
