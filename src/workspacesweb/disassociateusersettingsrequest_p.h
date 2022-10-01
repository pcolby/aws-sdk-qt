// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERSETTINGSREQUEST_P_H
#define QTAWS_DISASSOCIATEUSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "disassociateusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateUserSettingsRequest;

class DisassociateUserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DisassociateUserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DisassociateUserSettingsRequest * const q);
    DisassociateUserSettingsRequestPrivate(const DisassociateUserSettingsRequestPrivate &other,
                                   DisassociateUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
