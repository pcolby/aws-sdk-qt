// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELBIASJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBEMODELBIASJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelBiasJobDefinitionResponse;

class DescribeModelBiasJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeModelBiasJobDefinitionResponsePrivate(DescribeModelBiasJobDefinitionResponse * const q);

    void parseDescribeModelBiasJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelBiasJobDefinitionResponse)
    Q_DISABLE_COPY(DescribeModelBiasJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
