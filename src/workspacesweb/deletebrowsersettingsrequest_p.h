// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBROWSERSETTINGSREQUEST_P_H
#define QTAWS_DELETEBROWSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "deletebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteBrowserSettingsRequest;

class DeleteBrowserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DeleteBrowserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DeleteBrowserSettingsRequest * const q);
    DeleteBrowserSettingsRequestPrivate(const DeleteBrowserSettingsRequestPrivate &other,
                                   DeleteBrowserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
