// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSUBNETGROUPRESPONSE_H
#define QTAWS_CREATECLUSTERSUBNETGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "createclustersubnetgrouprequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSubnetGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterSubnetGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateClusterSubnetGroupResponse(const CreateClusterSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterSubnetGroupResponse)
    Q_DISABLE_COPY(CreateClusterSubnetGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
