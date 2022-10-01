// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectiveInstanceAssociationsResponse;

class DescribeEffectiveInstanceAssociationsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeEffectiveInstanceAssociationsResponsePrivate(DescribeEffectiveInstanceAssociationsResponse * const q);

    void parseDescribeEffectiveInstanceAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEffectiveInstanceAssociationsResponse)
    Q_DISABLE_COPY(DescribeEffectiveInstanceAssociationsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
