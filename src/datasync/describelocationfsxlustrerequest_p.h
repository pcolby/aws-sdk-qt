// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXLUSTREREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONFSXLUSTREREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationfsxlustrerequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxLustreRequest;

class DescribeLocationFsxLustreRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationFsxLustreRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationFsxLustreRequest * const q);
    DescribeLocationFsxLustreRequestPrivate(const DescribeLocationFsxLustreRequestPrivate &other,
                                   DescribeLocationFsxLustreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxLustreRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
