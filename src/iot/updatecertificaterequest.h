// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEREQUEST_H
#define QTAWS_UPDATECERTIFICATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateCertificateRequestPrivate;

class QTAWSIOT_EXPORT UpdateCertificateRequest : public IoTRequest {

public:
    UpdateCertificateRequest(const UpdateCertificateRequest &other);
    UpdateCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
