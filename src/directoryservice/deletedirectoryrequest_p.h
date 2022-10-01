// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYREQUEST_P_H
#define QTAWS_DELETEDIRECTORYREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "deletedirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteDirectoryRequest;

class DeleteDirectoryRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DeleteDirectoryRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DeleteDirectoryRequest * const q);
    DeleteDirectoryRequestPrivate(const DeleteDirectoryRequestPrivate &other,
                                   DeleteDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
