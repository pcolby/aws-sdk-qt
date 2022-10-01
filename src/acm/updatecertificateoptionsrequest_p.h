// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEOPTIONSREQUEST_P_H
#define QTAWS_UPDATECERTIFICATEOPTIONSREQUEST_P_H

#include "acmrequest_p.h"
#include "updatecertificateoptionsrequest.h"

namespace QtAws {
namespace Acm {

class UpdateCertificateOptionsRequest;

class UpdateCertificateOptionsRequestPrivate : public AcmRequestPrivate {

public:
    UpdateCertificateOptionsRequestPrivate(const AcmRequest::Action action,
                                   UpdateCertificateOptionsRequest * const q);
    UpdateCertificateOptionsRequestPrivate(const UpdateCertificateOptionsRequestPrivate &other,
                                   UpdateCertificateOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateOptionsRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
