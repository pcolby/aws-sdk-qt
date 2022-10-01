// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWDEFINITIONSRESPONSE_H
#define QTAWS_LISTFLOWDEFINITIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listflowdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListFlowDefinitionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListFlowDefinitionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListFlowDefinitionsResponse(const ListFlowDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFlowDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFlowDefinitionsResponse)
    Q_DISABLE_COPY(ListFlowDefinitionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
