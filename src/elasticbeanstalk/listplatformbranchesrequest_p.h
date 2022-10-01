// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMBRANCHESREQUEST_P_H
#define QTAWS_LISTPLATFORMBRANCHESREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "listplatformbranchesrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformBranchesRequest;

class ListPlatformBranchesRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    ListPlatformBranchesRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   ListPlatformBranchesRequest * const q);
    ListPlatformBranchesRequestPrivate(const ListPlatformBranchesRequestPrivate &other,
                                   ListPlatformBranchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPlatformBranchesRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
