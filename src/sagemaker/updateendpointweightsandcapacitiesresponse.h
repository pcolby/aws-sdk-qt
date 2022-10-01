// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESRESPONSE_H
#define QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESRESPONSE_H

#include "sagemakerresponse.h"
#include "updateendpointweightsandcapacitiesrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateEndpointWeightsAndCapacitiesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateEndpointWeightsAndCapacitiesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateEndpointWeightsAndCapacitiesResponse(const UpdateEndpointWeightsAndCapacitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEndpointWeightsAndCapacitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointWeightsAndCapacitiesResponse)
    Q_DISABLE_COPY(UpdateEndpointWeightsAndCapacitiesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
