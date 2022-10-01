// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeEngineDefaultParametersResponse;

class DescribeEngineDefaultParametersResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeEngineDefaultParametersResponsePrivate(DescribeEngineDefaultParametersResponse * const q);

    void parseDescribeEngineDefaultParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEngineDefaultParametersResponse)
    Q_DISABLE_COPY(DescribeEngineDefaultParametersResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
