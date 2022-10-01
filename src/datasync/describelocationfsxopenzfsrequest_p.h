// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXOPENZFSREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONFSXOPENZFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationfsxopenzfsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxOpenZfsRequest;

class DescribeLocationFsxOpenZfsRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationFsxOpenZfsRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationFsxOpenZfsRequest * const q);
    DescribeLocationFsxOpenZfsRequestPrivate(const DescribeLocationFsxOpenZfsRequestPrivate &other,
                                   DescribeLocationFsxOpenZfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxOpenZfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
