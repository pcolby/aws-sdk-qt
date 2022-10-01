// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTAPPSERVERREQUEST_P_H
#define QTAWS_RESTARTAPPSERVERREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "restartappserverrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RestartAppServerRequest;

class RestartAppServerRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    RestartAppServerRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   RestartAppServerRequest * const q);
    RestartAppServerRequestPrivate(const RestartAppServerRequestPrivate &other,
                                   RestartAppServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestartAppServerRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
