// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSETREQUEST_P_H
#define QTAWS_DESCRIBEPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "describepermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribePermissionSetRequest;

class DescribePermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    DescribePermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   DescribePermissionSetRequest * const q);
    DescribePermissionSetRequestPrivate(const DescribePermissionSetRequestPrivate &other,
                                   DescribePermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
