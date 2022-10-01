// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONOBJECTSTORAGEREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONOBJECTSTORAGEREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationobjectstoragerequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationObjectStorageRequest;

class DescribeLocationObjectStorageRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationObjectStorageRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationObjectStorageRequest * const q);
    DescribeLocationObjectStorageRequestPrivate(const DescribeLocationObjectStorageRequestPrivate &other,
                                   DescribeLocationObjectStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationObjectStorageRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
