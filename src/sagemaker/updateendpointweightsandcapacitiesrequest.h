// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESREQUEST_H
#define QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateEndpointWeightsAndCapacitiesRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateEndpointWeightsAndCapacitiesRequest : public SageMakerRequest {

public:
    UpdateEndpointWeightsAndCapacitiesRequest(const UpdateEndpointWeightsAndCapacitiesRequest &other);
    UpdateEndpointWeightsAndCapacitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointWeightsAndCapacitiesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
