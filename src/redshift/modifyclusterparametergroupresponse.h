// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_MODIFYCLUSTERPARAMETERGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterParameterGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterParameterGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterParameterGroupResponse(const ModifyClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterParameterGroupResponse)
    Q_DISABLE_COPY(ModifyClusterParameterGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
