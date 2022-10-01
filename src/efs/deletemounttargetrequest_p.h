// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOUNTTARGETREQUEST_P_H
#define QTAWS_DELETEMOUNTTARGETREQUEST_P_H

#include "efsrequest_p.h"
#include "deletemounttargetrequest.h"

namespace QtAws {
namespace Efs {

class DeleteMountTargetRequest;

class DeleteMountTargetRequestPrivate : public EfsRequestPrivate {

public:
    DeleteMountTargetRequestPrivate(const EfsRequest::Action action,
                                   DeleteMountTargetRequest * const q);
    DeleteMountTargetRequestPrivate(const DeleteMountTargetRequestPrivate &other,
                                   DeleteMountTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMountTargetRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
