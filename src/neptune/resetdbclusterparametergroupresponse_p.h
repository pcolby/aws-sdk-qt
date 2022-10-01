// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_RESETDBCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class ResetDBClusterParameterGroupResponse;

class ResetDBClusterParameterGroupResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit ResetDBClusterParameterGroupResponsePrivate(ResetDBClusterParameterGroupResponse * const q);

    void parseResetDBClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(ResetDBClusterParameterGroupResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
