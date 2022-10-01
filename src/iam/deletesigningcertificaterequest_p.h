// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNINGCERTIFICATEREQUEST_P_H
#define QTAWS_DELETESIGNINGCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "deletesigningcertificaterequest.h"

namespace QtAws {
namespace Iam {

class DeleteSigningCertificateRequest;

class DeleteSigningCertificateRequestPrivate : public IamRequestPrivate {

public:
    DeleteSigningCertificateRequestPrivate(const IamRequest::Action action,
                                   DeleteSigningCertificateRequest * const q);
    DeleteSigningCertificateRequestPrivate(const DeleteSigningCertificateRequestPrivate &other,
                                   DeleteSigningCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSigningCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
