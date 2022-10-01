// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVERESOURCEPERMISSIONREQUEST_P_H
#define QTAWS_REMOVERESOURCEPERMISSIONREQUEST_P_H

#include "workdocsrequest_p.h"
#include "removeresourcepermissionrequest.h"

namespace QtAws {
namespace WorkDocs {

class RemoveResourcePermissionRequest;

class RemoveResourcePermissionRequestPrivate : public WorkDocsRequestPrivate {

public:
    RemoveResourcePermissionRequestPrivate(const WorkDocsRequest::Action action,
                                   RemoveResourcePermissionRequest * const q);
    RemoveResourcePermissionRequestPrivate(const RemoveResourcePermissionRequestPrivate &other,
                                   RemoveResourcePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveResourcePermissionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
