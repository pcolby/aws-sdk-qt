// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMVERSIONSREQUEST_P_H
#define QTAWS_LISTPLATFORMVERSIONSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "listplatformversionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformVersionsRequest;

class ListPlatformVersionsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    ListPlatformVersionsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   ListPlatformVersionsRequest * const q);
    ListPlatformVersionsRequestPrivate(const ListPlatformVersionsRequestPrivate &other,
                                   ListPlatformVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPlatformVersionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
