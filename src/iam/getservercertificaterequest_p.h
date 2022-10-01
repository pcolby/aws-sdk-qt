// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERCERTIFICATEREQUEST_P_H
#define QTAWS_GETSERVERCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "getservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class GetServerCertificateRequest;

class GetServerCertificateRequestPrivate : public IamRequestPrivate {

public:
    GetServerCertificateRequestPrivate(const IamRequest::Action action,
                                   GetServerCertificateRequest * const q);
    GetServerCertificateRequestPrivate(const GetServerCertificateRequestPrivate &other,
                                   GetServerCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
