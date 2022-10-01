// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDRESOURCEPERMISSIONSREQUEST_P_H
#define QTAWS_ADDRESOURCEPERMISSIONSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "addresourcepermissionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class AddResourcePermissionsRequest;

class AddResourcePermissionsRequestPrivate : public WorkDocsRequestPrivate {

public:
    AddResourcePermissionsRequestPrivate(const WorkDocsRequest::Action action,
                                   AddResourcePermissionsRequest * const q);
    AddResourcePermissionsRequestPrivate(const AddResourcePermissionsRequestPrivate &other,
                                   AddResourcePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddResourcePermissionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
