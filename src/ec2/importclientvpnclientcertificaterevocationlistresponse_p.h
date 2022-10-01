// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_P_H
#define QTAWS_IMPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ImportClientVpnClientCertificateRevocationListResponse;

class ImportClientVpnClientCertificateRevocationListResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ImportClientVpnClientCertificateRevocationListResponsePrivate(ImportClientVpnClientCertificateRevocationListResponse * const q);

    void parseImportClientVpnClientCertificateRevocationListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportClientVpnClientCertificateRevocationListResponse)
    Q_DISABLE_COPY(ImportClientVpnClientCertificateRevocationListResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
