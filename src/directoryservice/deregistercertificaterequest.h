// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCERTIFICATEREQUEST_H
#define QTAWS_DEREGISTERCERTIFICATEREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterCertificateRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeregisterCertificateRequest : public DirectoryServiceRequest {

public:
    DeregisterCertificateRequest(const DeregisterCertificateRequest &other);
    DeregisterCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterCertificateRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
