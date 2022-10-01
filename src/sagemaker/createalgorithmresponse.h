// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALGORITHMRESPONSE_H
#define QTAWS_CREATEALGORITHMRESPONSE_H

#include "sagemakerresponse.h"
#include "createalgorithmrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAlgorithmResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateAlgorithmResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateAlgorithmResponse(const CreateAlgorithmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAlgorithmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAlgorithmResponse)
    Q_DISABLE_COPY(CreateAlgorithmResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
