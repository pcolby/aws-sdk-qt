// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEFILESYSTEMNFSV3LOCKSREQUEST_P_H
#define QTAWS_RELEASEFILESYSTEMNFSV3LOCKSREQUEST_P_H

#include "fsxrequest_p.h"
#include "releasefilesystemnfsv3locksrequest.h"

namespace QtAws {
namespace FSx {

class ReleaseFileSystemNfsV3LocksRequest;

class ReleaseFileSystemNfsV3LocksRequestPrivate : public FSxRequestPrivate {

public:
    ReleaseFileSystemNfsV3LocksRequestPrivate(const FSxRequest::Action action,
                                   ReleaseFileSystemNfsV3LocksRequest * const q);
    ReleaseFileSystemNfsV3LocksRequestPrivate(const ReleaseFileSystemNfsV3LocksRequestPrivate &other,
                                   ReleaseFileSystemNfsV3LocksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReleaseFileSystemNfsV3LocksRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
