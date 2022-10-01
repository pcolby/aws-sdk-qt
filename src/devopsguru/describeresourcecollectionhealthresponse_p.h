// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeResourceCollectionHealthResponse;

class DescribeResourceCollectionHealthResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeResourceCollectionHealthResponsePrivate(DescribeResourceCollectionHealthResponse * const q);

    void parseDescribeResourceCollectionHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourceCollectionHealthResponse)
    Q_DISABLE_COPY(DescribeResourceCollectionHealthResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
