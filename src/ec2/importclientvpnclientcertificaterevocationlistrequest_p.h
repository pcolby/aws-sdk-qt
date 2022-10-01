// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTREQUEST_P_H
#define QTAWS_IMPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTREQUEST_P_H

#include "ec2request_p.h"
#include "importclientvpnclientcertificaterevocationlistrequest.h"

namespace QtAws {
namespace Ec2 {

class ImportClientVpnClientCertificateRevocationListRequest;

class ImportClientVpnClientCertificateRevocationListRequestPrivate : public Ec2RequestPrivate {

public:
    ImportClientVpnClientCertificateRevocationListRequestPrivate(const Ec2Request::Action action,
                                   ImportClientVpnClientCertificateRevocationListRequest * const q);
    ImportClientVpnClientCertificateRevocationListRequestPrivate(const ImportClientVpnClientCertificateRevocationListRequestPrivate &other,
                                   ImportClientVpnClientCertificateRevocationListRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportClientVpnClientCertificateRevocationListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
