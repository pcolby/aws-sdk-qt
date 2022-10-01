// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPSREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPSREQUEST_P_H

#include "fsxrequest_p.h"
#include "describebackupsrequest.h"

namespace QtAws {
namespace FSx {

class DescribeBackupsRequest;

class DescribeBackupsRequestPrivate : public FSxRequestPrivate {

public:
    DescribeBackupsRequestPrivate(const FSxRequest::Action action,
                                   DescribeBackupsRequest * const q);
    DescribeBackupsRequestPrivate(const DescribeBackupsRequestPrivate &other,
                                   DescribeBackupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupsRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
