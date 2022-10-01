// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSANDCERTIFICATEREQUEST_H
#define QTAWS_CREATEKEYSANDCERTIFICATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateKeysAndCertificateRequestPrivate;

class QTAWSIOT_EXPORT CreateKeysAndCertificateRequest : public IoTRequest {

public:
    CreateKeysAndCertificateRequest(const CreateKeysAndCertificateRequest &other);
    CreateKeysAndCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeysAndCertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
