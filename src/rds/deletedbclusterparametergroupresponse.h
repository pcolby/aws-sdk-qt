// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_DELETEDBCLUSTERPARAMETERGROUPRESPONSE_H

#include "rdsresponse.h"
#include "deletedbclusterparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterParameterGroupResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBClusterParameterGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBClusterParameterGroupResponse(const DeleteDBClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(DeleteDBClusterParameterGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
