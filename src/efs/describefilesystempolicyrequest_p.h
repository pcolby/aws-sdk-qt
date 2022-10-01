// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMPOLICYREQUEST_P_H
#define QTAWS_DESCRIBEFILESYSTEMPOLICYREQUEST_P_H

#include "efsrequest_p.h"
#include "describefilesystempolicyrequest.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemPolicyRequest;

class DescribeFileSystemPolicyRequestPrivate : public EfsRequestPrivate {

public:
    DescribeFileSystemPolicyRequestPrivate(const EfsRequest::Action action,
                                   DescribeFileSystemPolicyRequest * const q);
    DescribeFileSystemPolicyRequestPrivate(const DescribeFileSystemPolicyRequestPrivate &other,
                                   DescribeFileSystemPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
