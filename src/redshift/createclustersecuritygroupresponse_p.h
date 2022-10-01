// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSECURITYGROUPRESPONSE_P_H
#define QTAWS_CREATECLUSTERSECURITYGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSecurityGroupResponse;

class CreateClusterSecurityGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateClusterSecurityGroupResponsePrivate(CreateClusterSecurityGroupResponse * const q);

    void parseCreateClusterSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClusterSecurityGroupResponse)
    Q_DISABLE_COPY(CreateClusterSecurityGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
