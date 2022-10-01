// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLESOLUTIONSTACKSREQUEST_P_H
#define QTAWS_LISTAVAILABLESOLUTIONSTACKSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "listavailablesolutionstacksrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListAvailableSolutionStacksRequest;

class ListAvailableSolutionStacksRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    ListAvailableSolutionStacksRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   ListAvailableSolutionStacksRequest * const q);
    ListAvailableSolutionStacksRequestPrivate(const ListAvailableSolutionStacksRequestPrivate &other,
                                   ListAvailableSolutionStacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailableSolutionStacksRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
