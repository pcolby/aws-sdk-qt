// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBROWSERSETTINGSREQUEST_P_H
#define QTAWS_DISASSOCIATEBROWSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "disassociatebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateBrowserSettingsRequest;

class DisassociateBrowserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DisassociateBrowserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DisassociateBrowserSettingsRequest * const q);
    DisassociateBrowserSettingsRequestPrivate(const DisassociateBrowserSettingsRequestPrivate &other,
                                   DisassociateBrowserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
