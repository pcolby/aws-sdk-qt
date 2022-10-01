// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTSRESPONSE_P_H
#define QTAWS_DESCRIBEOBJECTSRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class DescribeObjectsResponse;

class DescribeObjectsResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit DescribeObjectsResponsePrivate(DescribeObjectsResponse * const q);

    void parseDescribeObjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeObjectsResponse)
    Q_DISABLE_COPY(DescribeObjectsResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
