// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTALREQUEST_P_H
#define QTAWS_CREATEPORTALREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "createportalrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreatePortalRequest;

class CreatePortalRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    CreatePortalRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   CreatePortalRequest * const q);
    CreatePortalRequestPrivate(const CreatePortalRequestPrivate &other,
                                   CreatePortalRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
