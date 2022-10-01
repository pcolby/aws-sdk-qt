// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYLINEAGERESPONSE_H
#define QTAWS_QUERYLINEAGERESPONSE_H

#include "sagemakerresponse.h"
#include "querylineagerequest.h"

namespace QtAws {
namespace SageMaker {

class QueryLineageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT QueryLineageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    QueryLineageResponse(const QueryLineageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryLineageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryLineageResponse)
    Q_DISABLE_COPY(QueryLineageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
