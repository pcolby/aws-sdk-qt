// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDENCLAVECERTIFICATEIAMROLESRESPONSE_H
#define QTAWS_GETASSOCIATEDENCLAVECERTIFICATEIAMROLESRESPONSE_H

#include "ec2response.h"
#include "getassociatedenclavecertificateiamrolesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetAssociatedEnclaveCertificateIamRolesResponsePrivate;

class QTAWSEC2_EXPORT GetAssociatedEnclaveCertificateIamRolesResponse : public Ec2Response {
    Q_OBJECT

public:
    GetAssociatedEnclaveCertificateIamRolesResponse(const GetAssociatedEnclaveCertificateIamRolesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssociatedEnclaveCertificateIamRolesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociatedEnclaveCertificateIamRolesResponse)
    Q_DISABLE_COPY(GetAssociatedEnclaveCertificateIamRolesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
