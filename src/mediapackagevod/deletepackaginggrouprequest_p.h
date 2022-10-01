// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGGROUPREQUEST_P_H
#define QTAWS_DELETEPACKAGINGGROUPREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "deletepackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingGroupRequest;

class DeletePackagingGroupRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    DeletePackagingGroupRequestPrivate(const MediaPackageVodRequest::Action action,
                                   DeletePackagingGroupRequest * const q);
    DeletePackagingGroupRequestPrivate(const DeletePackagingGroupRequestPrivate &other,
                                   DeletePackagingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
