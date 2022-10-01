// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERREQUEST_P_H
#define QTAWS_DELETEFOLDERREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletefolderrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteFolderRequest;

class DeleteFolderRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteFolderRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteFolderRequest * const q);
    DeleteFolderRequestPrivate(const DeleteFolderRequestPrivate &other,
                                   DeleteFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFolderRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
