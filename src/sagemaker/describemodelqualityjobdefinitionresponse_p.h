// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelQualityJobDefinitionResponse;

class DescribeModelQualityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeModelQualityJobDefinitionResponsePrivate(DescribeModelQualityJobDefinitionResponse * const q);

    void parseDescribeModelQualityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelQualityJobDefinitionResponse)
    Q_DISABLE_COPY(DescribeModelQualityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
