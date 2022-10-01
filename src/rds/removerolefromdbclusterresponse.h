// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBCLUSTERRESPONSE_H
#define QTAWS_REMOVEROLEFROMDBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "removerolefromdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class RemoveRoleFromDBClusterResponsePrivate;

class QTAWSRDS_EXPORT RemoveRoleFromDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    RemoveRoleFromDBClusterResponse(const RemoveRoleFromDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveRoleFromDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRoleFromDBClusterResponse)
    Q_DISABLE_COPY(RemoveRoleFromDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
