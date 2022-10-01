// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATECONFIGURATIONREQUEST_H
#define QTAWS_GETGROUPCERTIFICATECONFIGURATIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateConfigurationRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetGroupCertificateConfigurationRequest : public GreengrassRequest {

public:
    GetGroupCertificateConfigurationRequest(const GetGroupCertificateConfigurationRequest &other);
    GetGroupCertificateConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupCertificateConfigurationRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
