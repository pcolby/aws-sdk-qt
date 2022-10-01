// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTEDRESOURCEREQUEST_P_H
#define QTAWS_DESCRIBEPROTECTEDRESOURCEREQUEST_P_H

#include "backuprequest_p.h"
#include "describeprotectedresourcerequest.h"

namespace QtAws {
namespace Backup {

class DescribeProtectedResourceRequest;

class DescribeProtectedResourceRequestPrivate : public BackupRequestPrivate {

public:
    DescribeProtectedResourceRequestPrivate(const BackupRequest::Action action,
                                   DescribeProtectedResourceRequest * const q);
    DescribeProtectedResourceRequestPrivate(const DescribeProtectedResourceRequestPrivate &other,
                                   DescribeProtectedResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProtectedResourceRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
