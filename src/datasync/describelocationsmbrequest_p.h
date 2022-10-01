// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSMBREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONSMBREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationsmbrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationSmbRequest;

class DescribeLocationSmbRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationSmbRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationSmbRequest * const q);
    DescribeLocationSmbRequestPrivate(const DescribeLocationSmbRequestPrivate &other,
                                   DescribeLocationSmbRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationSmbRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
