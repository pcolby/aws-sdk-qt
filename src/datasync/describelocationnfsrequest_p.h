// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONNFSREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONNFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationnfsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationNfsRequest;

class DescribeLocationNfsRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationNfsRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationNfsRequest * const q);
    DescribeLocationNfsRequestPrivate(const DescribeLocationNfsRequestPrivate &other,
                                   DescribeLocationNfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationNfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
