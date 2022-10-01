// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTENVIRONMENTUPDATEREQUEST_P_H
#define QTAWS_ABORTENVIRONMENTUPDATEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "abortenvironmentupdaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AbortEnvironmentUpdateRequest;

class AbortEnvironmentUpdateRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    AbortEnvironmentUpdateRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   AbortEnvironmentUpdateRequest * const q);
    AbortEnvironmentUpdateRequestPrivate(const AbortEnvironmentUpdateRequestPrivate &other,
                                   AbortEnvironmentUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(AbortEnvironmentUpdateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
