// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_MODIFYCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterParameterGroupResponse;

class ModifyClusterParameterGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyClusterParameterGroupResponsePrivate(ModifyClusterParameterGroupResponse * const q);

    void parseModifyClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterParameterGroupResponse)
    Q_DISABLE_COPY(ModifyClusterParameterGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
