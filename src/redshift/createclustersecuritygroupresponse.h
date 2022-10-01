// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSECURITYGROUPRESPONSE_H
#define QTAWS_CREATECLUSTERSECURITYGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "createclustersecuritygrouprequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSecurityGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterSecurityGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateClusterSecurityGroupResponse(const CreateClusterSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterSecurityGroupResponse)
    Q_DISABLE_COPY(CreateClusterSecurityGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
