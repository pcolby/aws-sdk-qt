// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPPOLICYREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPPOLICYREQUEST_P_H

#include "efsrequest_p.h"
#include "describebackuppolicyrequest.h"

namespace QtAws {
namespace Efs {

class DescribeBackupPolicyRequest;

class DescribeBackupPolicyRequestPrivate : public EfsRequestPrivate {

public:
    DescribeBackupPolicyRequestPrivate(const EfsRequest::Action action,
                                   DescribeBackupPolicyRequest * const q);
    DescribeBackupPolicyRequestPrivate(const DescribeBackupPolicyRequestPrivate &other,
                                   DescribeBackupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
