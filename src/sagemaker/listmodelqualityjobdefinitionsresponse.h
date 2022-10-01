// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELQUALITYJOBDEFINITIONSRESPONSE_H
#define QTAWS_LISTMODELQUALITYJOBDEFINITIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listmodelqualityjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelQualityJobDefinitionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListModelQualityJobDefinitionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListModelQualityJobDefinitionsResponse(const ListModelQualityJobDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelQualityJobDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelQualityJobDefinitionsResponse)
    Q_DISABLE_COPY(ListModelQualityJobDefinitionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
