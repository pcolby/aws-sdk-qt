// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOCERTIFICATEREQUEST_P_H
#define QTAWS_ADDTAGSTOCERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "addtagstocertificaterequest.h"

namespace QtAws {
namespace Acm {

class AddTagsToCertificateRequest;

class AddTagsToCertificateRequestPrivate : public AcmRequestPrivate {

public:
    AddTagsToCertificateRequestPrivate(const AcmRequest::Action action,
                                   AddTagsToCertificateRequest * const q);
    AddTagsToCertificateRequestPrivate(const AddTagsToCertificateRequestPrivate &other,
                                   AddTagsToCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsToCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
