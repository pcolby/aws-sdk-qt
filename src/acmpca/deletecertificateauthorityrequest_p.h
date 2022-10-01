// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_DELETECERTIFICATEAUTHORITYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "deletecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class DeleteCertificateAuthorityRequest;

class DeleteCertificateAuthorityRequestPrivate : public AcmPcaRequestPrivate {

public:
    DeleteCertificateAuthorityRequestPrivate(const AcmPcaRequest::Action action,
                                   DeleteCertificateAuthorityRequest * const q);
    DeleteCertificateAuthorityRequestPrivate(const DeleteCertificateAuthorityRequestPrivate &other,
                                   DeleteCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
