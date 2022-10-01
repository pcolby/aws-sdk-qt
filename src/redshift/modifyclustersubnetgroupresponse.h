// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSUBNETGROUPRESPONSE_H
#define QTAWS_MODIFYCLUSTERSUBNETGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclustersubnetgrouprequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSubnetGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterSubnetGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterSubnetGroupResponse(const ModifyClusterSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyClusterSubnetGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
