// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERREQUEST_P_H
#define QTAWS_DESCRIBECONTAINERREQUEST_P_H

#include "mediastorerequest_p.h"
#include "describecontainerrequest.h"

namespace QtAws {
namespace MediaStore {

class DescribeContainerRequest;

class DescribeContainerRequestPrivate : public MediaStoreRequestPrivate {

public:
    DescribeContainerRequestPrivate(const MediaStoreRequest::Action action,
                                   DescribeContainerRequest * const q);
    DescribeContainerRequestPrivate(const DescribeContainerRequestPrivate &other,
                                   DescribeContainerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContainerRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
