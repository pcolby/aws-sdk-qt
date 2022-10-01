// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALGORITHMRESPONSE_H
#define QTAWS_DELETEALGORITHMRESPONSE_H

#include "sagemakerresponse.h"
#include "deletealgorithmrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAlgorithmResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteAlgorithmResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteAlgorithmResponse(const DeleteAlgorithmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAlgorithmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlgorithmResponse)
    Q_DISABLE_COPY(DeleteAlgorithmResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
