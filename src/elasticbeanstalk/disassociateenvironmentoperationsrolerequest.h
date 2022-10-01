// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_H
#define QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DisassociateEnvironmentOperationsRoleRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DisassociateEnvironmentOperationsRoleRequest : public ElasticBeanstalkRequest {

public:
    DisassociateEnvironmentOperationsRoleRequest(const DisassociateEnvironmentOperationsRoleRequest &other);
    DisassociateEnvironmentOperationsRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateEnvironmentOperationsRoleRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
