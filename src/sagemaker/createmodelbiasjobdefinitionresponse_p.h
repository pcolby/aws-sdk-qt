// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELBIASJOBDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEMODELBIASJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateModelBiasJobDefinitionResponse;

class CreateModelBiasJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateModelBiasJobDefinitionResponsePrivate(CreateModelBiasJobDefinitionResponse * const q);

    void parseCreateModelBiasJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelBiasJobDefinitionResponse)
    Q_DISABLE_COPY(CreateModelBiasJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
