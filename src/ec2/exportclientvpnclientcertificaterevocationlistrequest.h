// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTREQUEST_H
#define QTAWS_EXPORTCLIENTVPNCLIENTCERTIFICATEREVOCATIONLISTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ExportClientVpnClientCertificateRevocationListRequestPrivate;

class QTAWSEC2_EXPORT ExportClientVpnClientCertificateRevocationListRequest : public Ec2Request {

public:
    ExportClientVpnClientCertificateRevocationListRequest(const ExportClientVpnClientCertificateRevocationListRequest &other);
    ExportClientVpnClientCertificateRevocationListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportClientVpnClientCertificateRevocationListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
