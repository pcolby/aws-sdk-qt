// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONHDFSREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONHDFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationhdfsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationHdfsRequest;

class DescribeLocationHdfsRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationHdfsRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationHdfsRequest * const q);
    DescribeLocationHdfsRequestPrivate(const DescribeLocationHdfsRequestPrivate &other,
                                   DescribeLocationHdfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationHdfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
