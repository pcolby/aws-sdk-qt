// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTSHAREDDIRECTORYREQUEST_P_H
#define QTAWS_ACCEPTSHAREDDIRECTORYREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "acceptshareddirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class AcceptSharedDirectoryRequest;

class AcceptSharedDirectoryRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    AcceptSharedDirectoryRequestPrivate(const DirectoryServiceRequest::Action action,
                                   AcceptSharedDirectoryRequest * const q);
    AcceptSharedDirectoryRequestPrivate(const AcceptSharedDirectoryRequestPrivate &other,
                                   AcceptSharedDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptSharedDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
