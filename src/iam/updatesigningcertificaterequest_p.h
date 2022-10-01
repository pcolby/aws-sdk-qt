// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNINGCERTIFICATEREQUEST_P_H
#define QTAWS_UPDATESIGNINGCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "updatesigningcertificaterequest.h"

namespace QtAws {
namespace Iam {

class UpdateSigningCertificateRequest;

class UpdateSigningCertificateRequestPrivate : public IamRequestPrivate {

public:
    UpdateSigningCertificateRequestPrivate(const IamRequest::Action action,
                                   UpdateSigningCertificateRequest * const q);
    UpdateSigningCertificateRequestPrivate(const UpdateSigningCertificateRequestPrivate &other,
                                   UpdateSigningCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSigningCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
