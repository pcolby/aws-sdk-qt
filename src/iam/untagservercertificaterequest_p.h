// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSERVERCERTIFICATEREQUEST_P_H
#define QTAWS_UNTAGSERVERCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "untagservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class UntagServerCertificateRequest;

class UntagServerCertificateRequestPrivate : public IamRequestPrivate {

public:
    UntagServerCertificateRequestPrivate(const IamRequest::Action action,
                                   UntagServerCertificateRequest * const q);
    UntagServerCertificateRequestPrivate(const UntagServerCertificateRequestPrivate &other,
                                   UntagServerCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
