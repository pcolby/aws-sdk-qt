// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMCLIENTCERTIFICATEREQUEST_P_H
#define QTAWS_CREATEHSMCLIENTCERTIFICATEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createhsmclientcertificaterequest.h"

namespace QtAws {
namespace Redshift {

class CreateHsmClientCertificateRequest;

class CreateHsmClientCertificateRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateHsmClientCertificateRequestPrivate(const RedshiftRequest::Action action,
                                   CreateHsmClientCertificateRequest * const q);
    CreateHsmClientCertificateRequestPrivate(const CreateHsmClientCertificateRequestPrivate &other,
                                   CreateHsmClientCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHsmClientCertificateRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
