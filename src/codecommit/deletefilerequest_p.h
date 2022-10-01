// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILEREQUEST_P_H
#define QTAWS_DELETEFILEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "deletefilerequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteFileRequest;

class DeleteFileRequestPrivate : public CodeCommitRequestPrivate {

public:
    DeleteFileRequestPrivate(const CodeCommitRequest::Action action,
                                   DeleteFileRequest * const q);
    DeleteFileRequestPrivate(const DeleteFileRequestPrivate &other,
                                   DeleteFileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFileRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
