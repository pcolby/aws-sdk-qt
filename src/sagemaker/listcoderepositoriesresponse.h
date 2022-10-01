// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODEREPOSITORIESRESPONSE_H
#define QTAWS_LISTCODEREPOSITORIESRESPONSE_H

#include "sagemakerresponse.h"
#include "listcoderepositoriesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCodeRepositoriesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListCodeRepositoriesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListCodeRepositoriesResponse(const ListCodeRepositoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCodeRepositoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCodeRepositoriesResponse)
    Q_DISABLE_COPY(ListCodeRepositoriesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
