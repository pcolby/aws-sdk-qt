// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINEREQUEST_H
#define QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectivePatchesForPatchBaselineRequestPrivate;

class QTAWSSSM_EXPORT DescribeEffectivePatchesForPatchBaselineRequest : public SsmRequest {

public:
    DescribeEffectivePatchesForPatchBaselineRequest(const DescribeEffectivePatchesForPatchBaselineRequest &other);
    DescribeEffectivePatchesForPatchBaselineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEffectivePatchesForPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
