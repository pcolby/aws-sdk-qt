// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_MODIFYDBCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterParameterGroupResponse;

class ModifyDBClusterParameterGroupResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit ModifyDBClusterParameterGroupResponsePrivate(ModifyDBClusterParameterGroupResponse * const q);

    void parseModifyDBClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(ModifyDBClusterParameterGroupResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
