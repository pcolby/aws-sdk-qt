// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONVERSIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "updateapplicationversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationVersionRequest;

class UpdateApplicationVersionRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    UpdateApplicationVersionRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   UpdateApplicationVersionRequest * const q);
    UpdateApplicationVersionRequestPrivate(const UpdateApplicationVersionRequestPrivate &other,
                                   UpdateApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
