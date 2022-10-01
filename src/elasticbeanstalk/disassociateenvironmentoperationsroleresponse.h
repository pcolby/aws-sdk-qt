// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_H
#define QTAWS_DISASSOCIATEENVIRONMENTOPERATIONSROLERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "disassociateenvironmentoperationsrolerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DisassociateEnvironmentOperationsRoleResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DisassociateEnvironmentOperationsRoleResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DisassociateEnvironmentOperationsRoleResponse(const DisassociateEnvironmentOperationsRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateEnvironmentOperationsRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateEnvironmentOperationsRoleResponse)
    Q_DISABLE_COPY(DisassociateEnvironmentOperationsRoleResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
