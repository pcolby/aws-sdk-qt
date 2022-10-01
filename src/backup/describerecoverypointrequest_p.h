// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYPOINTREQUEST_P_H
#define QTAWS_DESCRIBERECOVERYPOINTREQUEST_P_H

#include "backuprequest_p.h"
#include "describerecoverypointrequest.h"

namespace QtAws {
namespace Backup {

class DescribeRecoveryPointRequest;

class DescribeRecoveryPointRequestPrivate : public BackupRequestPrivate {

public:
    DescribeRecoveryPointRequestPrivate(const BackupRequest::Action action,
                                   DescribeRecoveryPointRequest * const q);
    DescribeRecoveryPointRequestPrivate(const DescribeRecoveryPointRequestPrivate &other,
                                   DescribeRecoveryPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecoveryPointRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
