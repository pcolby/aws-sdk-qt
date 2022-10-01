// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPERMISSIONREQUEST_P_H
#define QTAWS_REMOVEPERMISSIONREQUEST_P_H

#include "sqsrequest_p.h"
#include "removepermissionrequest.h"

namespace QtAws {
namespace Sqs {

class RemovePermissionRequest;

class RemovePermissionRequestPrivate : public SqsRequestPrivate {

public:
    RemovePermissionRequestPrivate(const SqsRequest::Action action,
                                   RemovePermissionRequest * const q);
    RemovePermissionRequestPrivate(const RemovePermissionRequestPrivate &other,
                                   RemovePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemovePermissionRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
