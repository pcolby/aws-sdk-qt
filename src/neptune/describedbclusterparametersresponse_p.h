// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterParametersResponse;

class DescribeDBClusterParametersResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBClusterParametersResponsePrivate(DescribeDBClusterParametersResponse * const q);

    void parseDescribeDBClusterParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterParametersResponse)
    Q_DISABLE_COPY(DescribeDBClusterParametersResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
