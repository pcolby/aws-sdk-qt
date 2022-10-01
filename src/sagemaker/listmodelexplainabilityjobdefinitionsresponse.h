// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELEXPLAINABILITYJOBDEFINITIONSRESPONSE_H
#define QTAWS_LISTMODELEXPLAINABILITYJOBDEFINITIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listmodelexplainabilityjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelExplainabilityJobDefinitionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListModelExplainabilityJobDefinitionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListModelExplainabilityJobDefinitionsResponse(const ListModelExplainabilityJobDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelExplainabilityJobDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelExplainabilityJobDefinitionsResponse)
    Q_DISABLE_COPY(ListModelExplainabilityJobDefinitionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
