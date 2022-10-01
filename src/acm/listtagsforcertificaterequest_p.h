// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORCERTIFICATEREQUEST_P_H
#define QTAWS_LISTTAGSFORCERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "listtagsforcertificaterequest.h"

namespace QtAws {
namespace Acm {

class ListTagsForCertificateRequest;

class ListTagsForCertificateRequestPrivate : public AcmRequestPrivate {

public:
    ListTagsForCertificateRequestPrivate(const AcmRequest::Action action,
                                   ListTagsForCertificateRequest * const q);
    ListTagsForCertificateRequestPrivate(const ListTagsForCertificateRequestPrivate &other,
                                   ListTagsForCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
