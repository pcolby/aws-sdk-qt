// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLRESOURCEPERMISSIONSREQUEST_P_H
#define QTAWS_REMOVEALLRESOURCEPERMISSIONSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "removeallresourcepermissionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class RemoveAllResourcePermissionsRequest;

class RemoveAllResourcePermissionsRequestPrivate : public WorkDocsRequestPrivate {

public:
    RemoveAllResourcePermissionsRequestPrivate(const WorkDocsRequest::Action action,
                                   RemoveAllResourcePermissionsRequest * const q);
    RemoveAllResourcePermissionsRequestPrivate(const RemoveAllResourcePermissionsRequestPrivate &other,
                                   RemoveAllResourcePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveAllResourcePermissionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
