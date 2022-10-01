// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_H
#define QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AssociateEnvironmentOperationsRoleRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT AssociateEnvironmentOperationsRoleRequest : public ElasticBeanstalkRequest {

public:
    AssociateEnvironmentOperationsRoleRequest(const AssociateEnvironmentOperationsRoleRequest &other);
    AssociateEnvironmentOperationsRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEnvironmentOperationsRoleRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
