// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCACERTIFICATEREQUEST_H
#define QTAWS_REGISTERCACERTIFICATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class RegisterCACertificateRequestPrivate;

class QTAWSIOT_EXPORT RegisterCACertificateRequest : public IoTRequest {

public:
    RegisterCACertificateRequest(const RegisterCACertificateRequest &other);
    RegisterCACertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCACertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
