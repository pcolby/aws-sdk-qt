// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELBIASJOBDEFINITIONSRESPONSE_H
#define QTAWS_LISTMODELBIASJOBDEFINITIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listmodelbiasjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelBiasJobDefinitionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListModelBiasJobDefinitionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListModelBiasJobDefinitionsResponse(const ListModelBiasJobDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelBiasJobDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelBiasJobDefinitionsResponse)
    Q_DISABLE_COPY(ListModelBiasJobDefinitionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
