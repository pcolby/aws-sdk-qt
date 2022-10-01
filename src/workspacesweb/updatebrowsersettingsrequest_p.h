// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROWSERSETTINGSREQUEST_P_H
#define QTAWS_UPDATEBROWSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "updatebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateBrowserSettingsRequest;

class UpdateBrowserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    UpdateBrowserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   UpdateBrowserSettingsRequest * const q);
    UpdateBrowserSettingsRequestPrivate(const UpdateBrowserSettingsRequestPrivate &other,
                                   UpdateBrowserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
