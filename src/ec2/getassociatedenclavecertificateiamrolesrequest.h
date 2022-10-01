// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDENCLAVECERTIFICATEIAMROLESREQUEST_H
#define QTAWS_GETASSOCIATEDENCLAVECERTIFICATEIAMROLESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetAssociatedEnclaveCertificateIamRolesRequestPrivate;

class QTAWSEC2_EXPORT GetAssociatedEnclaveCertificateIamRolesRequest : public Ec2Request {

public:
    GetAssociatedEnclaveCertificateIamRolesRequest(const GetAssociatedEnclaveCertificateIamRolesRequest &other);
    GetAssociatedEnclaveCertificateIamRolesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociatedEnclaveCertificateIamRolesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
