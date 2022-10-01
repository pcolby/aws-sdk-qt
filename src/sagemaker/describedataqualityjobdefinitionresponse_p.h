// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAQUALITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBEDATAQUALITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeDataQualityJobDefinitionResponse;

class DescribeDataQualityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeDataQualityJobDefinitionResponsePrivate(DescribeDataQualityJobDefinitionResponse * const q);

    void parseDescribeDataQualityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataQualityJobDefinitionResponse)
    Q_DISABLE_COPY(DescribeDataQualityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
