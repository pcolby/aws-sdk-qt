// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLEREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "updateapplicationresourcelifecyclerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationResourceLifecycleRequest;

class UpdateApplicationResourceLifecycleRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    UpdateApplicationResourceLifecycleRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   UpdateApplicationResourceLifecycleRequest * const q);
    UpdateApplicationResourceLifecycleRequestPrivate(const UpdateApplicationResourceLifecycleRequestPrivate &other,
                                   UpdateApplicationResourceLifecycleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationResourceLifecycleRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
