// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTCONFIGRESPONSE_H
#define QTAWS_CREATEENDPOINTCONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "createendpointconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEndpointConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateEndpointConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateEndpointConfigResponse(const CreateEndpointConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEndpointConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointConfigResponse)
    Q_DISABLE_COPY(CreateEndpointConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
