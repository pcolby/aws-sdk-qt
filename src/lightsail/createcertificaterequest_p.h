// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEREQUEST_P_H
#define QTAWS_CREATECERTIFICATEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createcertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class CreateCertificateRequest;

class CreateCertificateRequestPrivate : public LightsailRequestPrivate {

public:
    CreateCertificateRequestPrivate(const LightsailRequest::Action action,
                                   CreateCertificateRequest * const q);
    CreateCertificateRequestPrivate(const CreateCertificateRequestPrivate &other,
                                   CreateCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
