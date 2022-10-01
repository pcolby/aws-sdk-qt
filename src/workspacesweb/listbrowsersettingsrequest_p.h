// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROWSERSETTINGSREQUEST_P_H
#define QTAWS_LISTBROWSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "listbrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListBrowserSettingsRequest;

class ListBrowserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    ListBrowserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   ListBrowserSettingsRequest * const q);
    ListBrowserSettingsRequestPrivate(const ListBrowserSettingsRequestPrivate &other,
                                   ListBrowserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
