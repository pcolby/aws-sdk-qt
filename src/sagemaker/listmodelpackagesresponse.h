// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGESRESPONSE_H
#define QTAWS_LISTMODELPACKAGESRESPONSE_H

#include "sagemakerresponse.h"
#include "listmodelpackagesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackagesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListModelPackagesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListModelPackagesResponse(const ListModelPackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelPackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelPackagesResponse)
    Q_DISABLE_COPY(ListModelPackagesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
