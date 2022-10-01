// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXWINDOWSREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONFSXWINDOWSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationfsxwindowsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxWindowsRequest;

class DescribeLocationFsxWindowsRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationFsxWindowsRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationFsxWindowsRequest * const q);
    DescribeLocationFsxWindowsRequestPrivate(const DescribeLocationFsxWindowsRequestPrivate &other,
                                   DescribeLocationFsxWindowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxWindowsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
