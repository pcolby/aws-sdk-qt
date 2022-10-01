// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSUBNETGROUPRESPONSE_P_H
#define QTAWS_DELETECLUSTERSUBNETGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSubnetGroupResponse;

class DeleteClusterSubnetGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteClusterSubnetGroupResponsePrivate(DeleteClusterSubnetGroupResponse * const q);

    void parseDeleteClusterSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClusterSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteClusterSubnetGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
