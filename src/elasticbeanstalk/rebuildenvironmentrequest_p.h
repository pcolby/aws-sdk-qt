// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBUILDENVIRONMENTREQUEST_P_H
#define QTAWS_REBUILDENVIRONMENTREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "rebuildenvironmentrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RebuildEnvironmentRequest;

class RebuildEnvironmentRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    RebuildEnvironmentRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   RebuildEnvironmentRequest * const q);
    RebuildEnvironmentRequestPrivate(const RebuildEnvironmentRequestPrivate &other,
                                   RebuildEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebuildEnvironmentRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
