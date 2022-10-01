// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWCERTIFICATEREQUEST_H
#define QTAWS_RENEWCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class RenewCertificateRequestPrivate;

class QTAWSACM_EXPORT RenewCertificateRequest : public AcmRequest {

public:
    RenewCertificateRequest(const RenewCertificateRequest &other);
    RenewCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RenewCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
