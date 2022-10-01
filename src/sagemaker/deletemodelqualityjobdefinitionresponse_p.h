// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELQUALITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEMODELQUALITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelQualityJobDefinitionResponse;

class DeleteModelQualityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteModelQualityJobDefinitionResponsePrivate(DeleteModelQualityJobDefinitionResponse * const q);

    void parseDeleteModelQualityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelQualityJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteModelQualityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
