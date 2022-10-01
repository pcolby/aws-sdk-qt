// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEFLEETREQUEST_H
#define QTAWS_DELETEDEVICEFLEETREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteDeviceFleetRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteDeviceFleetRequest : public SageMakerRequest {

public:
    DeleteDeviceFleetRequest(const DeleteDeviceFleetRequest &other);
    DeleteDeviceFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
