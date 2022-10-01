// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEFLEETREQUEST_H
#define QTAWS_CREATEDEVICEFLEETREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateDeviceFleetRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateDeviceFleetRequest : public SageMakerRequest {

public:
    CreateDeviceFleetRequest(const CreateDeviceFleetRequest &other);
    CreateDeviceFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
