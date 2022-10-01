// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEVERSIONRESPONSE_H
#define QTAWS_CREATEIMAGEVERSIONRESPONSE_H

#include "sagemakerresponse.h"
#include "createimageversionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateImageVersionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateImageVersionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateImageVersionResponse(const CreateImageVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImageVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageVersionResponse)
    Q_DISABLE_COPY(CreateImageVersionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
