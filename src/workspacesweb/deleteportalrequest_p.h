// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTALREQUEST_P_H
#define QTAWS_DELETEPORTALREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "deleteportalrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeletePortalRequest;

class DeletePortalRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DeletePortalRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DeletePortalRequest * const q);
    DeletePortalRequestPrivate(const DeletePortalRequestPrivate &other,
                                   DeletePortalRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
