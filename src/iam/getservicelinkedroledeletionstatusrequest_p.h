// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_P_H
#define QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_P_H

#include "iamrequest_p.h"
#include "getservicelinkedroledeletionstatusrequest.h"

namespace QtAws {
namespace Iam {

class GetServiceLinkedRoleDeletionStatusRequest;

class GetServiceLinkedRoleDeletionStatusRequestPrivate : public IamRequestPrivate {

public:
    GetServiceLinkedRoleDeletionStatusRequestPrivate(const IamRequest::Action action,
                                   GetServiceLinkedRoleDeletionStatusRequest * const q);
    GetServiceLinkedRoleDeletionStatusRequestPrivate(const GetServiceLinkedRoleDeletionStatusRequestPrivate &other,
                                   GetServiceLinkedRoleDeletionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceLinkedRoleDeletionStatusRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
