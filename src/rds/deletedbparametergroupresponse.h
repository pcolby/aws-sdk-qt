// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPARAMETERGROUPRESPONSE_H
#define QTAWS_DELETEDBPARAMETERGROUPRESPONSE_H

#include "rdsresponse.h"
#include "deletedbparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBParameterGroupResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBParameterGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBParameterGroupResponse(const DeleteDBParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBParameterGroupResponse)
    Q_DISABLE_COPY(DeleteDBParameterGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
