// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_H
#define QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_H

#include "ec2response.h"
#include "associateenclavecertificateiamrolerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateEnclaveCertificateIamRoleResponsePrivate;

class QTAWSEC2_EXPORT AssociateEnclaveCertificateIamRoleResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateEnclaveCertificateIamRoleResponse(const AssociateEnclaveCertificateIamRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateEnclaveCertificateIamRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEnclaveCertificateIamRoleResponse)
    Q_DISABLE_COPY(AssociateEnclaveCertificateIamRoleResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
