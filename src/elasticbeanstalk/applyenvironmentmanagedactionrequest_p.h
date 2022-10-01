// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYENVIRONMENTMANAGEDACTIONREQUEST_P_H
#define QTAWS_APPLYENVIRONMENTMANAGEDACTIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "applyenvironmentmanagedactionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ApplyEnvironmentManagedActionRequest;

class ApplyEnvironmentManagedActionRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    ApplyEnvironmentManagedActionRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   ApplyEnvironmentManagedActionRequest * const q);
    ApplyEnvironmentManagedActionRequestPrivate(const ApplyEnvironmentManagedActionRequestPrivate &other,
                                   ApplyEnvironmentManagedActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplyEnvironmentManagedActionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
