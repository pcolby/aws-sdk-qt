// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSREQUEST_H
#define QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetSecurityGroupsRequestPrivate;

class QTAWSEFS_EXPORT DescribeMountTargetSecurityGroupsRequest : public EfsRequest {

public:
    DescribeMountTargetSecurityGroupsRequest(const DescribeMountTargetSecurityGroupsRequest &other);
    DescribeMountTargetSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMountTargetSecurityGroupsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
