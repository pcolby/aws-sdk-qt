// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTCONFIGURATIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "deleteenvironmentconfigurationrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteEnvironmentConfigurationRequest;

class DeleteEnvironmentConfigurationRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DeleteEnvironmentConfigurationRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DeleteEnvironmentConfigurationRequest * const q);
    DeleteEnvironmentConfigurationRequestPrivate(const DeleteEnvironmentConfigurationRequestPrivate &other,
                                   DeleteEnvironmentConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentConfigurationRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
