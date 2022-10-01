// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMREQUEST_P_H
#define QTAWS_UPDATEFILESYSTEMREQUEST_P_H

#include "efsrequest_p.h"
#include "updatefilesystemrequest.h"

namespace QtAws {
namespace Efs {

class UpdateFileSystemRequest;

class UpdateFileSystemRequestPrivate : public EfsRequestPrivate {

public:
    UpdateFileSystemRequestPrivate(const EfsRequest::Action action,
                                   UpdateFileSystemRequest * const q);
    UpdateFileSystemRequestPrivate(const UpdateFileSystemRequestPrivate &other,
                                   UpdateFileSystemRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFileSystemRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
