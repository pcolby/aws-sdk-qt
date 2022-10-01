// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESREQUEST_H
#define QTAWS_UPDATEDEVICESREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateDevicesRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateDevicesRequest : public SageMakerRequest {

public:
    UpdateDevicesRequest(const UpdateDevicesRequest &other);
    UpdateDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevicesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
