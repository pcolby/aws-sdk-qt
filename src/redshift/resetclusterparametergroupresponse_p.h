// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_RESETCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ResetClusterParameterGroupResponse;

class ResetClusterParameterGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ResetClusterParameterGroupResponsePrivate(ResetClusterParameterGroupResponse * const q);

    void parseResetClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetClusterParameterGroupResponse)
    Q_DISABLE_COPY(ResetClusterParameterGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
