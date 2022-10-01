// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERSETTINGSREQUEST_P_H
#define QTAWS_ASSOCIATEUSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "associateusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateUserSettingsRequest;

class AssociateUserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    AssociateUserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   AssociateUserSettingsRequest * const q);
    AssociateUserSettingsRequestPrivate(const AssociateUserSettingsRequestPrivate &other,
                                   AssociateUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
