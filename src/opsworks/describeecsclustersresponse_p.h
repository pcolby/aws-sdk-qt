// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEECSCLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBEECSCLUSTERSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeEcsClustersResponse;

class DescribeEcsClustersResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeEcsClustersResponsePrivate(DescribeEcsClustersResponse * const q);

    void parseDescribeEcsClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEcsClustersResponse)
    Q_DISABLE_COPY(DescribeEcsClustersResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
