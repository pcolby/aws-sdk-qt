// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFORCESRESPONSE_H
#define QTAWS_LISTWORKFORCESRESPONSE_H

#include "sagemakerresponse.h"
#include "listworkforcesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListWorkforcesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListWorkforcesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListWorkforcesResponse(const ListWorkforcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkforcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkforcesResponse)
    Q_DISABLE_COPY(ListWorkforcesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
