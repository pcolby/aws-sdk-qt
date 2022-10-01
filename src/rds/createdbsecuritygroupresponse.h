// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSECURITYGROUPRESPONSE_H
#define QTAWS_CREATEDBSECURITYGROUPRESPONSE_H

#include "rdsresponse.h"
#include "createdbsecuritygrouprequest.h"

namespace QtAws {
namespace Rds {

class CreateDBSecurityGroupResponsePrivate;

class QTAWSRDS_EXPORT CreateDBSecurityGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBSecurityGroupResponse(const CreateDBSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBSecurityGroupResponse)
    Q_DISABLE_COPY(CreateDBSecurityGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
