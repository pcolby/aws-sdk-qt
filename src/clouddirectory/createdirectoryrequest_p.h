// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYREQUEST_P_H
#define QTAWS_CREATEDIRECTORYREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "createdirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateDirectoryRequest;

class CreateDirectoryRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    CreateDirectoryRequestPrivate(const CloudDirectoryRequest::Action action,
                                   CreateDirectoryRequest * const q);
    CreateDirectoryRequestPrivate(const CreateDirectoryRequestPrivate &other,
                                   CreateDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
