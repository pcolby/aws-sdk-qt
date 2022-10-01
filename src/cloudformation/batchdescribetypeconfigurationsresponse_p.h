// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBETYPECONFIGURATIONSRESPONSE_P_H
#define QTAWS_BATCHDESCRIBETYPECONFIGURATIONSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class BatchDescribeTypeConfigurationsResponse;

class BatchDescribeTypeConfigurationsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit BatchDescribeTypeConfigurationsResponsePrivate(BatchDescribeTypeConfigurationsResponse * const q);

    void parseBatchDescribeTypeConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDescribeTypeConfigurationsResponse)
    Q_DISABLE_COPY(BatchDescribeTypeConfigurationsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
