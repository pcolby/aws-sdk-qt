// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTSRESPONSE_H
#define QTAWS_LISTEXPERIMENTSRESPONSE_H

#include "sagemakerresponse.h"
#include "listexperimentsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListExperimentsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListExperimentsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListExperimentsResponse(const ListExperimentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExperimentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperimentsResponse)
    Q_DISABLE_COPY(ListExperimentsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
