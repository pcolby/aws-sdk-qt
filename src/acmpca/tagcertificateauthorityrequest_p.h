// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGCERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_TAGCERTIFICATEAUTHORITYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "tagcertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class TagCertificateAuthorityRequest;

class TagCertificateAuthorityRequestPrivate : public AcmPcaRequestPrivate {

public:
    TagCertificateAuthorityRequestPrivate(const AcmPcaRequest::Action action,
                                   TagCertificateAuthorityRequest * const q);
    TagCertificateAuthorityRequestPrivate(const TagCertificateAuthorityRequestPrivate &other,
                                   TagCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
