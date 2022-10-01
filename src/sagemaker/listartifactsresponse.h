// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARTIFACTSRESPONSE_H
#define QTAWS_LISTARTIFACTSRESPONSE_H

#include "sagemakerresponse.h"
#include "listartifactsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListArtifactsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListArtifactsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListArtifactsResponse(const ListArtifactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListArtifactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArtifactsResponse)
    Q_DISABLE_COPY(ListArtifactsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
