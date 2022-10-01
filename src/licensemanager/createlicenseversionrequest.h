// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEVERSIONREQUEST_H
#define QTAWS_CREATELICENSEVERSIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseVersionRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseVersionRequest : public LicenseManagerRequest {

public:
    CreateLicenseVersionRequest(const CreateLicenseVersionRequest &other);
    CreateLicenseVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseVersionRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
