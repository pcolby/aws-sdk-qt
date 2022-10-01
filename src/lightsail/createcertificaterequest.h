// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEREQUEST_H
#define QTAWS_CREATECERTIFICATEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateCertificateRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateCertificateRequest : public LightsailRequest {

public:
    CreateCertificateRequest(const CreateCertificateRequest &other);
    CreateCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
