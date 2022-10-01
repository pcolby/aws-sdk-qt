// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESTOREJOBREQUEST_P_H
#define QTAWS_DESCRIBERESTOREJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "describerestorejobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeRestoreJobRequest;

class DescribeRestoreJobRequestPrivate : public BackupRequestPrivate {

public:
    DescribeRestoreJobRequestPrivate(const BackupRequest::Action action,
                                   DescribeRestoreJobRequest * const q);
    DescribeRestoreJobRequestPrivate(const DescribeRestoreJobRequestPrivate &other,
                                   DescribeRestoreJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRestoreJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
