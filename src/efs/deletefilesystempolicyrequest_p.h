// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMPOLICYREQUEST_P_H
#define QTAWS_DELETEFILESYSTEMPOLICYREQUEST_P_H

#include "efsrequest_p.h"
#include "deletefilesystempolicyrequest.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemPolicyRequest;

class DeleteFileSystemPolicyRequestPrivate : public EfsRequestPrivate {

public:
    DeleteFileSystemPolicyRequestPrivate(const EfsRequest::Action action,
                                   DeleteFileSystemPolicyRequest * const q);
    DeleteFileSystemPolicyRequestPrivate(const DeleteFileSystemPolicyRequestPrivate &other,
                                   DeleteFileSystemPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFileSystemPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
