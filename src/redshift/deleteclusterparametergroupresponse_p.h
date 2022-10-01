// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_DELETECLUSTERPARAMETERGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterParameterGroupResponse;

class DeleteClusterParameterGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteClusterParameterGroupResponsePrivate(DeleteClusterParameterGroupResponse * const q);

    void parseDeleteClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClusterParameterGroupResponse)
    Q_DISABLE_COPY(DeleteClusterParameterGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
