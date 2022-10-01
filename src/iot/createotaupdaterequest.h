// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOTAUPDATEREQUEST_H
#define QTAWS_CREATEOTAUPDATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateOTAUpdateRequestPrivate;

class QTAWSIOT_EXPORT CreateOTAUpdateRequest : public IoTRequest {

public:
    CreateOTAUpdateRequest(const CreateOTAUpdateRequest &other);
    CreateOTAUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOTAUpdateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
