// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMCERTIFICATEREQUEST_P_H
#define QTAWS_REMOVETAGSFROMCERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "removetagsfromcertificaterequest.h"

namespace QtAws {
namespace Acm {

class RemoveTagsFromCertificateRequest;

class RemoveTagsFromCertificateRequestPrivate : public AcmRequestPrivate {

public:
    RemoveTagsFromCertificateRequestPrivate(const AcmRequest::Action action,
                                   RemoveTagsFromCertificateRequest * const q);
    RemoveTagsFromCertificateRequestPrivate(const RemoveTagsFromCertificateRequestPrivate &other,
                                   RemoveTagsFromCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
