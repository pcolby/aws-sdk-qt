// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMCLIENTCERTIFICATEREQUEST_P_H
#define QTAWS_DELETEHSMCLIENTCERTIFICATEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deletehsmclientcertificaterequest.h"

namespace QtAws {
namespace Redshift {

class DeleteHsmClientCertificateRequest;

class DeleteHsmClientCertificateRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteHsmClientCertificateRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteHsmClientCertificateRequest * const q);
    DeleteHsmClientCertificateRequestPrivate(const DeleteHsmClientCertificateRequestPrivate &other,
                                   DeleteHsmClientCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHsmClientCertificateRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
