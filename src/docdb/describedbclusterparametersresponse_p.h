// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClusterParametersResponse;

class DescribeDBClusterParametersResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DescribeDBClusterParametersResponsePrivate(DescribeDBClusterParametersResponse * const q);

    void parseDescribeDBClusterParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterParametersResponse)
    Q_DISABLE_COPY(DescribeDBClusterParametersResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
