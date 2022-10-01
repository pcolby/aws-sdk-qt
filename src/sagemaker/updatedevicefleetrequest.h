// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEFLEETREQUEST_H
#define QTAWS_UPDATEDEVICEFLEETREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateDeviceFleetRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateDeviceFleetRequest : public SageMakerRequest {

public:
    UpdateDeviceFleetRequest(const UpdateDeviceFleetRequest &other);
    UpdateDeviceFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
