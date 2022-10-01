// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_DELETEDBCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DeleteDBClusterParameterGroupResponse;

class DeleteDBClusterParameterGroupResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DeleteDBClusterParameterGroupResponsePrivate(DeleteDBClusterParameterGroupResponse * const q);

    void parseDeleteDBClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(DeleteDBClusterParameterGroupResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
