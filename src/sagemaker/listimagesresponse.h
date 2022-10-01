// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESRESPONSE_H
#define QTAWS_LISTIMAGESRESPONSE_H

#include "sagemakerresponse.h"
#include "listimagesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListImagesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListImagesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListImagesResponse(const ListImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagesResponse)
    Q_DISABLE_COPY(ListImagesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
