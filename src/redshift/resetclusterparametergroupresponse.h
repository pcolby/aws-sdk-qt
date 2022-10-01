// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_RESETCLUSTERPARAMETERGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "resetclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class ResetClusterParameterGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT ResetClusterParameterGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ResetClusterParameterGroupResponse(const ResetClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetClusterParameterGroupResponse)
    Q_DISABLE_COPY(ResetClusterParameterGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
