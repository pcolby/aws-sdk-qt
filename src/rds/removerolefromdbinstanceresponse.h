// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBINSTANCERESPONSE_H
#define QTAWS_REMOVEROLEFROMDBINSTANCERESPONSE_H

#include "rdsresponse.h"
#include "removerolefromdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class RemoveRoleFromDBInstanceResponsePrivate;

class QTAWSRDS_EXPORT RemoveRoleFromDBInstanceResponse : public RdsResponse {
    Q_OBJECT

public:
    RemoveRoleFromDBInstanceResponse(const RemoveRoleFromDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveRoleFromDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRoleFromDBInstanceResponse)
    Q_DISABLE_COPY(RemoveRoleFromDBInstanceResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
