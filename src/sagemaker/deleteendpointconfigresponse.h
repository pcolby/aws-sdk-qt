// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTCONFIGRESPONSE_H
#define QTAWS_DELETEENDPOINTCONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteendpointconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEndpointConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteEndpointConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteEndpointConfigResponse(const DeleteEndpointConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEndpointConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointConfigResponse)
    Q_DISABLE_COPY(DeleteEndpointConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
