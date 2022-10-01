// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELQUALITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEMODELQUALITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateModelQualityJobDefinitionResponse;

class CreateModelQualityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateModelQualityJobDefinitionResponsePrivate(CreateModelQualityJobDefinitionResponse * const q);

    void parseCreateModelQualityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelQualityJobDefinitionResponse)
    Q_DISABLE_COPY(CreateModelQualityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
