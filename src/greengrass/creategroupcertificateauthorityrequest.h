// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPCERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_CREATEGROUPCERTIFICATEAUTHORITYREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupCertificateAuthorityRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateGroupCertificateAuthorityRequest : public GreengrassRequest {

public:
    CreateGroupCertificateAuthorityRequest(const CreateGroupCertificateAuthorityRequest &other);
    CreateGroupCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGroupCertificateAuthorityRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
