// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAQUALITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEDATAQUALITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateDataQualityJobDefinitionResponse;

class CreateDataQualityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateDataQualityJobDefinitionResponsePrivate(CreateDataQualityJobDefinitionResponse * const q);

    void parseCreateDataQualityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataQualityJobDefinitionResponse)
    Q_DISABLE_COPY(CreateDataQualityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
