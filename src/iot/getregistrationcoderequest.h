// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRATIONCODEREQUEST_H
#define QTAWS_GETREGISTRATIONCODEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetRegistrationCodeRequestPrivate;

class QTAWSIOT_EXPORT GetRegistrationCodeRequest : public IoTRequest {

public:
    GetRegistrationCodeRequest(const GetRegistrationCodeRequest &other);
    GetRegistrationCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistrationCodeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
