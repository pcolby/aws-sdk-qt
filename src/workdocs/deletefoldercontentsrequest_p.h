// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERCONTENTSREQUEST_P_H
#define QTAWS_DELETEFOLDERCONTENTSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletefoldercontentsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteFolderContentsRequest;

class DeleteFolderContentsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteFolderContentsRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteFolderContentsRequest * const q);
    DeleteFolderContentsRequestPrivate(const DeleteFolderContentsRequestPrivate &other,
                                   DeleteFolderContentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFolderContentsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
