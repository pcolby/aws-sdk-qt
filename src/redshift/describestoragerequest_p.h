// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGEREQUEST_P_H
#define QTAWS_DESCRIBESTORAGEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describestoragerequest.h"

namespace QtAws {
namespace Redshift {

class DescribeStorageRequest;

class DescribeStorageRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeStorageRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeStorageRequest * const q);
    DescribeStorageRequestPrivate(const DescribeStorageRequestPrivate &other,
                                   DescribeStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStorageRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
