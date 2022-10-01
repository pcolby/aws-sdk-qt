// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSRESPONSE_H
#define QTAWS_LISTASSOCIATIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listassociationsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAssociationsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListAssociationsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListAssociationsResponse(const ListAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociationsResponse)
    Q_DISABLE_COPY(ListAssociationsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
