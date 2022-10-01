// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTENVIRONMENTINFOREQUEST_P_H
#define QTAWS_REQUESTENVIRONMENTINFOREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "requestenvironmentinforequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RequestEnvironmentInfoRequest;

class RequestEnvironmentInfoRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    RequestEnvironmentInfoRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   RequestEnvironmentInfoRequest * const q);
    RequestEnvironmentInfoRequestPrivate(const RequestEnvironmentInfoRequestPrivate &other,
                                   RequestEnvironmentInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestEnvironmentInfoRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
