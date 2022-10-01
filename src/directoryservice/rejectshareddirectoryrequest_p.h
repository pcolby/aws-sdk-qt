// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTSHAREDDIRECTORYREQUEST_P_H
#define QTAWS_REJECTSHAREDDIRECTORYREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "rejectshareddirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class RejectSharedDirectoryRequest;

class RejectSharedDirectoryRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    RejectSharedDirectoryRequestPrivate(const DirectoryServiceRequest::Action action,
                                   RejectSharedDirectoryRequest * const q);
    RejectSharedDirectoryRequestPrivate(const RejectSharedDirectoryRequestPrivate &other,
                                   RejectSharedDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectSharedDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
