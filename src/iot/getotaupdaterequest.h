// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOTAUPDATEREQUEST_H
#define QTAWS_GETOTAUPDATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetOTAUpdateRequestPrivate;

class QTAWSIOT_EXPORT GetOTAUpdateRequest : public IoTRequest {

public:
    GetOTAUpdateRequest(const GetOTAUpdateRequest &other);
    GetOTAUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOTAUpdateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
