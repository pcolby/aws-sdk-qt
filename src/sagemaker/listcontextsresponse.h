// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTEXTSRESPONSE_H
#define QTAWS_LISTCONTEXTSRESPONSE_H

#include "sagemakerresponse.h"
#include "listcontextsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListContextsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListContextsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListContextsResponse(const ListContextsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContextsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContextsResponse)
    Q_DISABLE_COPY(ListContextsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
