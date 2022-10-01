// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCERTIFICATEREQUEST_H
#define QTAWS_REQUESTCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class RequestCertificateRequestPrivate;

class QTAWSACM_EXPORT RequestCertificateRequest : public AcmRequest {

public:
    RequestCertificateRequest(const RequestCertificateRequest &other);
    RequestCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
