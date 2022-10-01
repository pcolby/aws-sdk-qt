// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAQUALITYJOBDEFINITIONSRESPONSE_H
#define QTAWS_LISTDATAQUALITYJOBDEFINITIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listdataqualityjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDataQualityJobDefinitionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListDataQualityJobDefinitionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListDataQualityJobDefinitionsResponse(const ListDataQualityJobDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataQualityJobDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataQualityJobDefinitionsResponse)
    Q_DISABLE_COPY(ListDataQualityJobDefinitionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
