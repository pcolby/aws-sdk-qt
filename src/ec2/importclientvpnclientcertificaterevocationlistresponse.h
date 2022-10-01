// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_H
#define QTAWS_IMPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTRESPONSE_H

#include "ec2response.h"
#include "importclientvpnclientcertificaterevocationlistrequest.h"

namespace QtAws {
namespace Ec2 {

class ImportClientVpnClientCertificateRevocationListResponsePrivate;

class QTAWSEC2_EXPORT ImportClientVpnClientCertificateRevocationListResponse : public Ec2Response {
    Q_OBJECT

public:
    ImportClientVpnClientCertificateRevocationListResponse(const ImportClientVpnClientCertificateRevocationListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportClientVpnClientCertificateRevocationListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportClientVpnClientCertificateRevocationListResponse)
    Q_DISABLE_COPY(ImportClientVpnClientCertificateRevocationListResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
