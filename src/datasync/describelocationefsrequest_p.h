// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONEFSREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONEFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationefsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationEfsRequest;

class DescribeLocationEfsRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationEfsRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationEfsRequest * const q);
    DescribeLocationEfsRequestPrivate(const DescribeLocationEfsRequestPrivate &other,
                                   DescribeLocationEfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationEfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
