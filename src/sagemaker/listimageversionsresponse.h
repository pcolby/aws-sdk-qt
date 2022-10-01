// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEVERSIONSRESPONSE_H
#define QTAWS_LISTIMAGEVERSIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listimageversionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListImageVersionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListImageVersionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListImageVersionsResponse(const ListImageVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImageVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImageVersionsResponse)
    Q_DISABLE_COPY(ListImageVersionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
