// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTRESPONSE_H
#define QTAWS_UPDATEENDPOINTRESPONSE_H

#include "sagemakerresponse.h"
#include "updateendpointrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateEndpointResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateEndpointResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateEndpointResponse(const UpdateEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointResponse)
    Q_DISABLE_COPY(UpdateEndpointResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
