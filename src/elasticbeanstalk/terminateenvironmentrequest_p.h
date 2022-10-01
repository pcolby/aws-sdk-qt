// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEENVIRONMENTREQUEST_P_H
#define QTAWS_TERMINATEENVIRONMENTREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "terminateenvironmentrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class TerminateEnvironmentRequest;

class TerminateEnvironmentRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    TerminateEnvironmentRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   TerminateEnvironmentRequest * const q);
    TerminateEnvironmentRequestPrivate(const TerminateEnvironmentRequestPrivate &other,
                                   TerminateEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateEnvironmentRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
