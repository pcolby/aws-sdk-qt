// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSECURITYGROUPRESPONSE_P_H
#define QTAWS_DELETECLUSTERSECURITYGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSecurityGroupResponse;

class DeleteClusterSecurityGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteClusterSecurityGroupResponsePrivate(DeleteClusterSecurityGroupResponse * const q);

    void parseDeleteClusterSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClusterSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteClusterSecurityGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
