// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEREQUEST_H
#define QTAWS_CREATELICENSEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseRequest : public LicenseManagerRequest {

public:
    CreateLicenseRequest(const CreateLicenseRequest &other);
    CreateLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
