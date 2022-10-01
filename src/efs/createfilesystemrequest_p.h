// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMREQUEST_P_H
#define QTAWS_CREATEFILESYSTEMREQUEST_P_H

#include "efsrequest_p.h"
#include "createfilesystemrequest.h"

namespace QtAws {
namespace Efs {

class CreateFileSystemRequest;

class CreateFileSystemRequestPrivate : public EfsRequestPrivate {

public:
    CreateFileSystemRequestPrivate(const EfsRequest::Action action,
                                   CreateFileSystemRequest * const q);
    CreateFileSystemRequestPrivate(const CreateFileSystemRequestPrivate &other,
                                   CreateFileSystemRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFileSystemRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
