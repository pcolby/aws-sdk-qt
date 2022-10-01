// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPCERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_CREATEGROUPCERTIFICATEAUTHORITYREQUEST_P_H

#include "greengrassrequest_p.h"
#include "creategroupcertificateauthorityrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupCertificateAuthorityRequest;

class CreateGroupCertificateAuthorityRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateGroupCertificateAuthorityRequestPrivate(const GreengrassRequest::Action action,
                                   CreateGroupCertificateAuthorityRequest * const q);
    CreateGroupCertificateAuthorityRequestPrivate(const CreateGroupCertificateAuthorityRequestPrivate &other,
                                   CreateGroupCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGroupCertificateAuthorityRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
