// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIMENSIONREQUEST_H
#define QTAWS_CREATEDIMENSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateDimensionRequestPrivate;

class QTAWSIOT_EXPORT CreateDimensionRequest : public IoTRequest {

public:
    CreateDimensionRequest(const CreateDimensionRequest &other);
    CreateDimensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
