// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATEWITHOUTCAREQUEST_H
#define QTAWS_REGISTERCERTIFICATEWITHOUTCAREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class RegisterCertificateWithoutCARequestPrivate;

class QTAWSIOT_EXPORT RegisterCertificateWithoutCARequest : public IoTRequest {

public:
    RegisterCertificateWithoutCARequest(const RegisterCertificateWithoutCARequest &other);
    RegisterCertificateWithoutCARequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCertificateWithoutCARequest)

};

} // namespace IoT
} // namespace QtAws

#endif
