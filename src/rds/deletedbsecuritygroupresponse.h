// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSECURITYGROUPRESPONSE_H
#define QTAWS_DELETEDBSECURITYGROUPRESPONSE_H

#include "rdsresponse.h"
#include "deletedbsecuritygrouprequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBSecurityGroupResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBSecurityGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBSecurityGroupResponse(const DeleteDBSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteDBSecurityGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
