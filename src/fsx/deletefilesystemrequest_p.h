// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMREQUEST_P_H
#define QTAWS_DELETEFILESYSTEMREQUEST_P_H

#include "fsxrequest_p.h"
#include "deletefilesystemrequest.h"

namespace QtAws {
namespace FSx {

class DeleteFileSystemRequest;

class DeleteFileSystemRequestPrivate : public FSxRequestPrivate {

public:
    DeleteFileSystemRequestPrivate(const FSxRequest::Action action,
                                   DeleteFileSystemRequest * const q);
    DeleteFileSystemRequestPrivate(const DeleteFileSystemRequestPrivate &other,
                                   DeleteFileSystemRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFileSystemRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
