// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_GETGROUPCERTIFICATEAUTHORITYREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateAuthorityRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetGroupCertificateAuthorityRequest : public GreengrassRequest {

public:
    GetGroupCertificateAuthorityRequest(const GetGroupCertificateAuthorityRequest &other);
    GetGroupCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupCertificateAuthorityRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
