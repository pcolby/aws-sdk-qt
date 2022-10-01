// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELBIASJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEMODELBIASJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelBiasJobDefinitionResponse;

class DeleteModelBiasJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteModelBiasJobDefinitionResponsePrivate(DeleteModelBiasJobDefinitionResponse * const q);

    void parseDeleteModelBiasJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelBiasJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteModelBiasJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
