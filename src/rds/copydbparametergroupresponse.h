// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBPARAMETERGROUPRESPONSE_H
#define QTAWS_COPYDBPARAMETERGROUPRESPONSE_H

#include "rdsresponse.h"
#include "copydbparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class CopyDBParameterGroupResponsePrivate;

class QTAWSRDS_EXPORT CopyDBParameterGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    CopyDBParameterGroupResponse(const CopyDBParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyDBParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBParameterGroupResponse)
    Q_DISABLE_COPY(CopyDBParameterGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
