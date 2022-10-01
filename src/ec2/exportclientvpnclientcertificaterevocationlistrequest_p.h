// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTREQUEST_P_H
#define QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTREQUEST_P_H

#include "ec2request_p.h"
#include "exportclientvpnclientcertificaterevocationlistrequest.h"

namespace QtAws {
namespace Ec2 {

class ExportClientVpnClientCertificateRevocationListRequest;

class ExportClientVpnClientCertificateRevocationListRequestPrivate : public Ec2RequestPrivate {

public:
    ExportClientVpnClientCertificateRevocationListRequestPrivate(const Ec2Request::Action action,
                                   ExportClientVpnClientCertificateRevocationListRequest * const q);
    ExportClientVpnClientCertificateRevocationListRequestPrivate(const ExportClientVpnClientCertificateRevocationListRequestPrivate &other,
                                   ExportClientVpnClientCertificateRevocationListRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportClientVpnClientCertificateRevocationListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
