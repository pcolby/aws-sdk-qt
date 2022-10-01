// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONS3REQUEST_P_H
#define QTAWS_DESCRIBELOCATIONS3REQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocations3request.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationS3Request;

class DescribeLocationS3RequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationS3RequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationS3Request * const q);
    DescribeLocationS3RequestPrivate(const DescribeLocationS3RequestPrivate &other,
                                   DescribeLocationS3Request * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationS3Request)

};

} // namespace DataSync
} // namespace QtAws

#endif
