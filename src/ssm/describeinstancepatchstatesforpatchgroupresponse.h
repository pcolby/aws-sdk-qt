// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPRESPONSE_H

#include "ssmresponse.h"
#include "describeinstancepatchstatesforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesForPatchGroupResponsePrivate;

class QTAWSSSM_EXPORT DescribeInstancePatchStatesForPatchGroupResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeInstancePatchStatesForPatchGroupResponse(const DescribeInstancePatchStatesForPatchGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstancePatchStatesForPatchGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancePatchStatesForPatchGroupResponse)
    Q_DISABLE_COPY(DescribeInstancePatchStatesForPatchGroupResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
