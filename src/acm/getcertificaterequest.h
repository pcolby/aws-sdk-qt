// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEREQUEST_H
#define QTAWS_GETCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class GetCertificateRequestPrivate;

class QTAWSACM_EXPORT GetCertificateRequest : public AcmRequest {

public:
    GetCertificateRequest(const GetCertificateRequest &other);
    GetCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
