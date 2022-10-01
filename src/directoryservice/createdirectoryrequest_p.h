// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYREQUEST_P_H
#define QTAWS_CREATEDIRECTORYREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "createdirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateDirectoryRequest;

class CreateDirectoryRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CreateDirectoryRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CreateDirectoryRequest * const q);
    CreateDirectoryRequestPrivate(const CreateDirectoryRequestPrivate &other,
                                   CreateDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
