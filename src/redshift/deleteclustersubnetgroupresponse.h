// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSUBNETGROUPRESPONSE_H
#define QTAWS_DELETECLUSTERSUBNETGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "deleteclustersubnetgrouprequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSubnetGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterSubnetGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteClusterSubnetGroupResponse(const DeleteClusterSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClusterSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteClusterSubnetGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
