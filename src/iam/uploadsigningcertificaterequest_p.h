// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSIGNINGCERTIFICATEREQUEST_P_H
#define QTAWS_UPLOADSIGNINGCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "uploadsigningcertificaterequest.h"

namespace QtAws {
namespace Iam {

class UploadSigningCertificateRequest;

class UploadSigningCertificateRequestPrivate : public IamRequestPrivate {

public:
    UploadSigningCertificateRequestPrivate(const IamRequest::Action action,
                                   UploadSigningCertificateRequest * const q);
    UploadSigningCertificateRequestPrivate(const UploadSigningCertificateRequestPrivate &other,
                                   UploadSigningCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadSigningCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
