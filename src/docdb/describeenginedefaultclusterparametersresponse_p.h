// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DescribeEngineDefaultClusterParametersResponse;

class DescribeEngineDefaultClusterParametersResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DescribeEngineDefaultClusterParametersResponsePrivate(DescribeEngineDefaultClusterParametersResponse * const q);

    void parseDescribeEngineDefaultClusterParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEngineDefaultClusterParametersResponse)
    Q_DISABLE_COPY(DescribeEngineDefaultClusterParametersResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
