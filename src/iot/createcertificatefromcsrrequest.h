// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEFROMCSRREQUEST_H
#define QTAWS_CREATECERTIFICATEFROMCSRREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateCertificateFromCsrRequestPrivate;

class QTAWSIOT_EXPORT CreateCertificateFromCsrRequest : public IoTRequest {

public:
    CreateCertificateFromCsrRequest(const CreateCertificateFromCsrRequest &other);
    CreateCertificateFromCsrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateFromCsrRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
