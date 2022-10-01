// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTPERMISSIONREQUEST_P_H
#define QTAWS_DESCRIBEDOCUMENTPERMISSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "describedocumentpermissionrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeDocumentPermissionRequest;

class DescribeDocumentPermissionRequestPrivate : public SsmRequestPrivate {

public:
    DescribeDocumentPermissionRequestPrivate(const SsmRequest::Action action,
                                   DescribeDocumentPermissionRequest * const q);
    DescribeDocumentPermissionRequestPrivate(const DescribeDocumentPermissionRequestPrivate &other,
                                   DescribeDocumentPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentPermissionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
