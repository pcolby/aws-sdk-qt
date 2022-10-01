// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPERMISSIONREQUEST_P_H
#define QTAWS_ADDPERMISSIONREQUEST_P_H

#include "sqsrequest_p.h"
#include "addpermissionrequest.h"

namespace QtAws {
namespace Sqs {

class AddPermissionRequest;

class AddPermissionRequestPrivate : public SqsRequestPrivate {

public:
    AddPermissionRequestPrivate(const SqsRequest::Action action,
                                   AddPermissionRequest * const q);
    AddPermissionRequestPrivate(const AddPermissionRequestPrivate &other,
                                   AddPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddPermissionRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
