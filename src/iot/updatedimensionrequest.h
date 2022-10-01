// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIMENSIONREQUEST_H
#define QTAWS_UPDATEDIMENSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateDimensionRequestPrivate;

class QTAWSIOT_EXPORT UpdateDimensionRequest : public IoTRequest {

public:
    UpdateDimensionRequest(const UpdateDimensionRequest &other);
    UpdateDimensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
