// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMREQUEST_P_H
#define QTAWS_CREATEFILESYSTEMREQUEST_P_H

#include "fsxrequest_p.h"
#include "createfilesystemrequest.h"

namespace QtAws {
namespace FSx {

class CreateFileSystemRequest;

class CreateFileSystemRequestPrivate : public FSxRequestPrivate {

public:
    CreateFileSystemRequestPrivate(const FSxRequest::Action action,
                                   CreateFileSystemRequest * const q);
    CreateFileSystemRequestPrivate(const CreateFileSystemRequestPrivate &other,
                                   CreateFileSystemRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFileSystemRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
