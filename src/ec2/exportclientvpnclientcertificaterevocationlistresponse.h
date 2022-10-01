// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_H
#define QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_H

#include "ec2response.h"
#include "exportclientvpnclientcertificaterevocationlistrequest.h"

namespace QtAws {
namespace Ec2 {

class ExportClientVpnClientCertificateRevocationListResponsePrivate;

class QTAWSEC2_EXPORT ExportClientVpnClientCertificateRevocationListResponse : public Ec2Response {
    Q_OBJECT

public:
    ExportClientVpnClientCertificateRevocationListResponse(const ExportClientVpnClientCertificateRevocationListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportClientVpnClientCertificateRevocationListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportClientVpnClientCertificateRevocationListResponse)
    Q_DISABLE_COPY(ExportClientVpnClientCertificateRevocationListResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
