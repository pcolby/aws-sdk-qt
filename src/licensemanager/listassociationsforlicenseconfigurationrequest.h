// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONREQUEST_H
#define QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListAssociationsForLicenseConfigurationRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListAssociationsForLicenseConfigurationRequest : public LicenseManagerRequest {

public:
    ListAssociationsForLicenseConfigurationRequest(const ListAssociationsForLicenseConfigurationRequest &other);
    ListAssociationsForLicenseConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociationsForLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
