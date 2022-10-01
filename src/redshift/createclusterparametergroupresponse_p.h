// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_CREATECLUSTERPARAMETERGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateClusterParameterGroupResponse;

class CreateClusterParameterGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateClusterParameterGroupResponsePrivate(CreateClusterParameterGroupResponse * const q);

    void parseCreateClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClusterParameterGroupResponse)
    Q_DISABLE_COPY(CreateClusterParameterGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
