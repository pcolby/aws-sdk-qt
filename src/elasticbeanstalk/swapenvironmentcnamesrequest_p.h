// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWAPENVIRONMENTCNAMESREQUEST_P_H
#define QTAWS_SWAPENVIRONMENTCNAMESREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "swapenvironmentcnamesrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class SwapEnvironmentCNAMEsRequest;

class SwapEnvironmentCNAMEsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    SwapEnvironmentCNAMEsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   SwapEnvironmentCNAMEsRequest * const q);
    SwapEnvironmentCNAMEsRequestPrivate(const SwapEnvironmentCNAMEsRequestPrivate &other,
                                   SwapEnvironmentCNAMEsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SwapEnvironmentCNAMEsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
