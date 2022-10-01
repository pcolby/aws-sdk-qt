// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEENVIRONMENTINFOREQUEST_P_H
#define QTAWS_RETRIEVEENVIRONMENTINFOREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "retrieveenvironmentinforequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RetrieveEnvironmentInfoRequest;

class RetrieveEnvironmentInfoRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    RetrieveEnvironmentInfoRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   RetrieveEnvironmentInfoRequest * const q);
    RetrieveEnvironmentInfoRequestPrivate(const RetrieveEnvironmentInfoRequestPrivate &other,
                                   RetrieveEnvironmentInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetrieveEnvironmentInfoRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
