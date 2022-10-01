// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAQUALITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEDATAQUALITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteDataQualityJobDefinitionResponse;

class DeleteDataQualityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteDataQualityJobDefinitionResponsePrivate(DeleteDataQualityJobDefinitionResponse * const q);

    void parseDeleteDataQualityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataQualityJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteDataQualityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
