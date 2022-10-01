// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSREMOVEPERMISSIONREQUEST_P_H
#define SQSREMOVEPERMISSIONREQUEST_P_H

#include "sqsremovepermissionrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsRemovePermissionRequest;

class SqsRemovePermissionRequestPrivate : public SqsRequestPrivate {

public:
    SqsRemovePermissionRequestPrivate(const SqsRequest::Action action,
                                   SqsRemovePermissionRequest * const q);
    SqsRemovePermissionRequestPrivate(const SqsRemovePermissionRequestPrivate &other,
                                   SqsRemovePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsRemovePermissionRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
