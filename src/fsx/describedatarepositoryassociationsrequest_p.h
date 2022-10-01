// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSREQUEST_P_H

#include "fsxrequest_p.h"
#include "describedatarepositoryassociationsrequest.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryAssociationsRequest;

class DescribeDataRepositoryAssociationsRequestPrivate : public FSxRequestPrivate {

public:
    DescribeDataRepositoryAssociationsRequestPrivate(const FSxRequest::Action action,
                                   DescribeDataRepositoryAssociationsRequest * const q);
    DescribeDataRepositoryAssociationsRequestPrivate(const DescribeDataRepositoryAssociationsRequestPrivate &other,
                                   DescribeDataRepositoryAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataRepositoryAssociationsRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
