// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBROWSERSETTINGSREQUEST_P_H
#define QTAWS_CREATEBROWSERSETTINGSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "createbrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateBrowserSettingsRequest;

class CreateBrowserSettingsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    CreateBrowserSettingsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   CreateBrowserSettingsRequest * const q);
    CreateBrowserSettingsRequestPrivate(const CreateBrowserSettingsRequestPrivate &other,
                                   CreateBrowserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
