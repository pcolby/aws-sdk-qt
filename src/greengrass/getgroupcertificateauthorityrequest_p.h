// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_GETGROUPCERTIFICATEAUTHORITYREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getgroupcertificateauthorityrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateAuthorityRequest;

class GetGroupCertificateAuthorityRequestPrivate : public GreengrassRequestPrivate {

public:
    GetGroupCertificateAuthorityRequestPrivate(const GreengrassRequest::Action action,
                                   GetGroupCertificateAuthorityRequest * const q);
    GetGroupCertificateAuthorityRequestPrivate(const GetGroupCertificateAuthorityRequestPrivate &other,
                                   GetGroupCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupCertificateAuthorityRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
