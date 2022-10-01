// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_P_H
#define QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "disassociateenvironmentoperationsrolerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DisassociateEnvironmentOperationsRoleRequest;

class DisassociateEnvironmentOperationsRoleRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DisassociateEnvironmentOperationsRoleRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DisassociateEnvironmentOperationsRoleRequest * const q);
    DisassociateEnvironmentOperationsRoleRequestPrivate(const DisassociateEnvironmentOperationsRoleRequestPrivate &other,
                                   DisassociateEnvironmentOperationsRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateEnvironmentOperationsRoleRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
