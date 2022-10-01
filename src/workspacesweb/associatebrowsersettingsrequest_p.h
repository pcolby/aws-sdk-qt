// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBROWSERSETTINGSREQUEST_P_H
#define QTAWS_ASSOCIATEBROWSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "associatebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateBrowserSettingsRequest;

class AssociateBrowserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    AssociateBrowserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   AssociateBrowserSettingsRequest * const q);
    AssociateBrowserSettingsRequestPrivate(const AssociateBrowserSettingsRequestPrivate &other,
                                   AssociateBrowserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
