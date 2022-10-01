// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATECONFIGURATIONREQUEST_P_H
#define QTAWS_GETGROUPCERTIFICATECONFIGURATIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getgroupcertificateconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateConfigurationRequest;

class GetGroupCertificateConfigurationRequestPrivate : public GreengrassRequestPrivate {

public:
    GetGroupCertificateConfigurationRequestPrivate(const GreengrassRequest::Action action,
                                   GetGroupCertificateConfigurationRequest * const q);
    GetGroupCertificateConfigurationRequestPrivate(const GetGroupCertificateConfigurationRequestPrivate &other,
                                   GetGroupCertificateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupCertificateConfigurationRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
