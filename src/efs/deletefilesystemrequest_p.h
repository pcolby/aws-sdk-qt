// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMREQUEST_P_H
#define QTAWS_DELETEFILESYSTEMREQUEST_P_H

#include "efsrequest_p.h"
#include "deletefilesystemrequest.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemRequest;

class DeleteFileSystemRequestPrivate : public EfsRequestPrivate {

public:
    DeleteFileSystemRequestPrivate(const EfsRequest::Action action,
                                   DeleteFileSystemRequest * const q);
    DeleteFileSystemRequestPrivate(const DeleteFileSystemRequestPrivate &other,
                                   DeleteFileSystemRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFileSystemRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
