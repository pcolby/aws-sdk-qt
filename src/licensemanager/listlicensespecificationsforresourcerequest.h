// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCEREQUEST_H
#define QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseSpecificationsForResourceRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseSpecificationsForResourceRequest : public LicenseManagerRequest {

public:
    ListLicenseSpecificationsForResourceRequest(const ListLicenseSpecificationsForResourceRequest &other);
    ListLicenseSpecificationsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseSpecificationsForResourceRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
