// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAMEWORKREQUEST_P_H
#define QTAWS_DESCRIBEFRAMEWORKREQUEST_P_H

#include "backuprequest_p.h"
#include "describeframeworkrequest.h"

namespace QtAws {
namespace Backup {

class DescribeFrameworkRequest;

class DescribeFrameworkRequestPrivate : public BackupRequestPrivate {

public:
    DescribeFrameworkRequestPrivate(const BackupRequest::Action action,
                                   DescribeFrameworkRequest * const q);
    DescribeFrameworkRequestPrivate(const DescribeFrameworkRequestPrivate &other,
                                   DescribeFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
