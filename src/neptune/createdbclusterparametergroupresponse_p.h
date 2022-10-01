// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_CREATEDBCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterParameterGroupResponse;

class CreateDBClusterParameterGroupResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit CreateDBClusterParameterGroupResponsePrivate(CreateDBClusterParameterGroupResponse * const q);

    void parseCreateDBClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(CreateDBClusterParameterGroupResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
