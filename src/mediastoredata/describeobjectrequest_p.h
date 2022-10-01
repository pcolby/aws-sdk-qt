// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTREQUEST_P_H
#define QTAWS_DESCRIBEOBJECTREQUEST_P_H

#include "mediastoredatarequest_p.h"
#include "describeobjectrequest.h"

namespace QtAws {
namespace MediaStoreData {

class DescribeObjectRequest;

class DescribeObjectRequestPrivate : public MediaStoreDataRequestPrivate {

public:
    DescribeObjectRequestPrivate(const MediaStoreDataRequest::Action action,
                                   DescribeObjectRequest * const q);
    DescribeObjectRequestPrivate(const DescribeObjectRequestPrivate &other,
                                   DescribeObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeObjectRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
