// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBESCALINGPARAMETERSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DescribeScalingParametersResponse;

class DescribeScalingParametersResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DescribeScalingParametersResponsePrivate(DescribeScalingParametersResponse * const q);

    void parseDescribeScalingParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScalingParametersResponse)
    Q_DISABLE_COPY(DescribeScalingParametersResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
