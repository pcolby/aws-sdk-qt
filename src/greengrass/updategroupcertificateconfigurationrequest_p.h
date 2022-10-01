// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updategroupcertificateconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateGroupCertificateConfigurationRequest;

class UpdateGroupCertificateConfigurationRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateGroupCertificateConfigurationRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateGroupCertificateConfigurationRequest * const q);
    UpdateGroupCertificateConfigurationRequestPrivate(const UpdateGroupCertificateConfigurationRequestPrivate &other,
                                   UpdateGroupCertificateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGroupCertificateConfigurationRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
