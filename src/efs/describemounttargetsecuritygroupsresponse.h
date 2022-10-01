// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSRESPONSE_H
#define QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSRESPONSE_H

#include "efsresponse.h"
#include "describemounttargetsecuritygroupsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetSecurityGroupsResponsePrivate;

class QTAWSEFS_EXPORT DescribeMountTargetSecurityGroupsResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeMountTargetSecurityGroupsResponse(const DescribeMountTargetSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMountTargetSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMountTargetSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeMountTargetSecurityGroupsResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
