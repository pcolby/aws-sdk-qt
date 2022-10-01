// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_H
#define QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "associateenvironmentoperationsrolerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AssociateEnvironmentOperationsRoleResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT AssociateEnvironmentOperationsRoleResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    AssociateEnvironmentOperationsRoleResponse(const AssociateEnvironmentOperationsRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateEnvironmentOperationsRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEnvironmentOperationsRoleResponse)
    Q_DISABLE_COPY(AssociateEnvironmentOperationsRoleResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
