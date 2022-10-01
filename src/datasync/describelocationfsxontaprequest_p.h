// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXONTAPREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONFSXONTAPREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocationfsxontaprequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxOntapRequest;

class DescribeLocationFsxOntapRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationFsxOntapRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationFsxOntapRequest * const q);
    DescribeLocationFsxOntapRequestPrivate(const DescribeLocationFsxOntapRequestPrivate &other,
                                   DescribeLocationFsxOntapRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxOntapRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
