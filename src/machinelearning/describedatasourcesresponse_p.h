// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCESRESPONSE_P_H
#define QTAWS_DESCRIBEDATASOURCESRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DescribeDataSourcesResponse;

class DescribeDataSourcesResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DescribeDataSourcesResponsePrivate(DescribeDataSourcesResponse * const q);

    void parseDescribeDataSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSourcesResponse)
    Q_DISABLE_COPY(DescribeDataSourcesResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
