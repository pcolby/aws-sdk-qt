// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_P_H
#define QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ExportClientVpnClientCertificateRevocationListResponse;

class ExportClientVpnClientCertificateRevocationListResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ExportClientVpnClientCertificateRevocationListResponsePrivate(ExportClientVpnClientCertificateRevocationListResponse * const q);

    void parseExportClientVpnClientCertificateRevocationListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportClientVpnClientCertificateRevocationListResponse)
    Q_DISABLE_COPY(ExportClientVpnClientCertificateRevocationListResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
