// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERCERTIFICATEREQUEST_P_H
#define QTAWS_DELETESERVERCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class DeleteServerCertificateRequest;

class DeleteServerCertificateRequestPrivate : public IamRequestPrivate {

public:
    DeleteServerCertificateRequestPrivate(const IamRequest::Action action,
                                   DeleteServerCertificateRequest * const q);
    DeleteServerCertificateRequestPrivate(const DeleteServerCertificateRequestPrivate &other,
                                   DeleteServerCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
