// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINERESPONSE_H
#define QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINERESPONSE_H

#include "ssmresponse.h"
#include "describeeffectivepatchesforpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectivePatchesForPatchBaselineResponsePrivate;

class QTAWSSSM_EXPORT DescribeEffectivePatchesForPatchBaselineResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeEffectivePatchesForPatchBaselineResponse(const DescribeEffectivePatchesForPatchBaselineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEffectivePatchesForPatchBaselineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEffectivePatchesForPatchBaselineResponse)
    Q_DISABLE_COPY(DescribeEffectivePatchesForPatchBaselineResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
