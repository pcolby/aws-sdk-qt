// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPREQUEST_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesForPatchGroupRequestPrivate;

class QTAWSSSM_EXPORT DescribeInstancePatchStatesForPatchGroupRequest : public SsmRequest {

public:
    DescribeInstancePatchStatesForPatchGroupRequest(const DescribeInstancePatchStatesForPatchGroupRequest &other);
    DescribeInstancePatchStatesForPatchGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancePatchStatesForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
