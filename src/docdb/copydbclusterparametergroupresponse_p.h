// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_COPYDBCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class CopyDBClusterParameterGroupResponse;

class CopyDBClusterParameterGroupResponsePrivate : public DocDbResponsePrivate {

public:

    explicit CopyDBClusterParameterGroupResponsePrivate(CopyDBClusterParameterGroupResponse * const q);

    void parseCopyDBClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(CopyDBClusterParameterGroupResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
