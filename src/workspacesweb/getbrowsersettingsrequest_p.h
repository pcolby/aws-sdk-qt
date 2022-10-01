// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBROWSERSETTINGSREQUEST_P_H
#define QTAWS_GETBROWSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "getbrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetBrowserSettingsRequest;

class GetBrowserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetBrowserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetBrowserSettingsRequest * const q);
    GetBrowserSettingsRequestPrivate(const GetBrowserSettingsRequestPrivate &other,
                                   GetBrowserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
