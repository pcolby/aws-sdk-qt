// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSADDPERMISSIONREQUEST_P_H
#define SQSADDPERMISSIONREQUEST_P_H

#include "sqsaddpermissionrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsAddPermissionRequest;

class SqsAddPermissionRequestPrivate : public SqsRequestPrivate {

public:
    SqsAddPermissionRequest::PermissionsMap permissions; ///< Permissions to add.

    SqsAddPermissionRequestPrivate(const SqsRequest::Action action,
                                   SqsAddPermissionRequest * const q);
    SqsAddPermissionRequestPrivate(const SqsAddPermissionRequestPrivate &other,
                                   SqsAddPermissionRequest * const q);

    virtual QUrlQuery urlQuery() const;

private:
    Q_DECLARE_PUBLIC(SqsAddPermissionRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
