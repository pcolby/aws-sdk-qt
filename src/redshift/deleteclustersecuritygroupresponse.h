// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSECURITYGROUPRESPONSE_H
#define QTAWS_DELETECLUSTERSECURITYGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "deleteclustersecuritygrouprequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSecurityGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterSecurityGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteClusterSecurityGroupResponse(const DeleteClusterSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClusterSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteClusterSecurityGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
