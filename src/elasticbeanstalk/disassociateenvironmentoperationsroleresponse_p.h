// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_P_H
#define QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DisassociateEnvironmentOperationsRoleResponse;

class DisassociateEnvironmentOperationsRoleResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DisassociateEnvironmentOperationsRoleResponsePrivate(DisassociateEnvironmentOperationsRoleResponse * const q);

    void parseDisassociateEnvironmentOperationsRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateEnvironmentOperationsRoleResponse)
    Q_DISABLE_COPY(DisassociateEnvironmentOperationsRoleResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
