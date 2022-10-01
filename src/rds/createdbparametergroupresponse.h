// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPARAMETERGROUPRESPONSE_H
#define QTAWS_CREATEDBPARAMETERGROUPRESPONSE_H

#include "rdsresponse.h"
#include "createdbparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class CreateDBParameterGroupResponsePrivate;

class QTAWSRDS_EXPORT CreateDBParameterGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBParameterGroupResponse(const CreateDBParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBParameterGroupResponse)
    Q_DISABLE_COPY(CreateDBParameterGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
