// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_P_H
#define QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "associateenvironmentoperationsrolerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AssociateEnvironmentOperationsRoleRequest;

class AssociateEnvironmentOperationsRoleRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    AssociateEnvironmentOperationsRoleRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   AssociateEnvironmentOperationsRoleRequest * const q);
    AssociateEnvironmentOperationsRoleRequestPrivate(const AssociateEnvironmentOperationsRoleRequestPrivate &other,
                                   AssociateEnvironmentOperationsRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateEnvironmentOperationsRoleRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
