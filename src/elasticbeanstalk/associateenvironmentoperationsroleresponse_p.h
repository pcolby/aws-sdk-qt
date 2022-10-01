// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_P_H
#define QTAWS_ASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AssociateEnvironmentOperationsRoleResponse;

class AssociateEnvironmentOperationsRoleResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit AssociateEnvironmentOperationsRoleResponsePrivate(AssociateEnvironmentOperationsRoleResponse * const q);

    void parseAssociateEnvironmentOperationsRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateEnvironmentOperationsRoleResponse)
    Q_DISABLE_COPY(AssociateEnvironmentOperationsRoleResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
