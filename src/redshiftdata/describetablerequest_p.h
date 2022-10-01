// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEREQUEST_P_H
#define QTAWS_DESCRIBETABLEREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "describetablerequest.h"

namespace QtAws {
namespace RedshiftData {

class DescribeTableRequest;

class DescribeTableRequestPrivate : public RedshiftDataRequestPrivate {

public:
    DescribeTableRequestPrivate(const RedshiftDataRequest::Action action,
                                   DescribeTableRequest * const q);
    DescribeTableRequestPrivate(const DescribeTableRequestPrivate &other,
                                   DescribeTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTableRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
