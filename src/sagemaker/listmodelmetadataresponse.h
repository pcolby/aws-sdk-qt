// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELMETADATARESPONSE_H
#define QTAWS_LISTMODELMETADATARESPONSE_H

#include "sagemakerresponse.h"
#include "listmodelmetadatarequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelMetadataResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListModelMetadataResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListModelMetadataResponse(const ListModelMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelMetadataResponse)
    Q_DISABLE_COPY(ListModelMetadataResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
