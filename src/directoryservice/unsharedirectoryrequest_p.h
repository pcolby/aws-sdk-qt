// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSHAREDIRECTORYREQUEST_P_H
#define QTAWS_UNSHAREDIRECTORYREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "unsharedirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class UnshareDirectoryRequest;

class UnshareDirectoryRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    UnshareDirectoryRequestPrivate(const DirectoryServiceRequest::Action action,
                                   UnshareDirectoryRequest * const q);
    UnshareDirectoryRequestPrivate(const UnshareDirectoryRequestPrivate &other,
                                   UnshareDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnshareDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
