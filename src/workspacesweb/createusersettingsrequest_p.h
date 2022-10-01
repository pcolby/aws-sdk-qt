// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERSETTINGSREQUEST_P_H
#define QTAWS_CREATEUSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "createusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateUserSettingsRequest;

class CreateUserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    CreateUserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   CreateUserSettingsRequest * const q);
    CreateUserSettingsRequestPrivate(const CreateUserSettingsRequestPrivate &other,
                                   CreateUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
