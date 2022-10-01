// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSUBNETGROUPRESPONSE_P_H
#define QTAWS_CREATECLUSTERSUBNETGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSubnetGroupResponse;

class CreateClusterSubnetGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateClusterSubnetGroupResponsePrivate(CreateClusterSubnetGroupResponse * const q);

    void parseCreateClusterSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClusterSubnetGroupResponse)
    Q_DISABLE_COPY(CreateClusterSubnetGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
