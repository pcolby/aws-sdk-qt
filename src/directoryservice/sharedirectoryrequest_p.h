// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHAREDIRECTORYREQUEST_P_H
#define QTAWS_SHAREDIRECTORYREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "sharedirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class ShareDirectoryRequest;

class ShareDirectoryRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    ShareDirectoryRequestPrivate(const DirectoryServiceRequest::Action action,
                                   ShareDirectoryRequest * const q);
    ShareDirectoryRequestPrivate(const ShareDirectoryRequestPrivate &other,
                                   ShareDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ShareDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
