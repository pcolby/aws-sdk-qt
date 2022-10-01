// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCEREQUEST_H
#define QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConversionTaskForResourceRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseConversionTaskForResourceRequest : public LicenseManagerRequest {

public:
    CreateLicenseConversionTaskForResourceRequest(const CreateLicenseConversionTaskForResourceRequest &other);
    CreateLicenseConversionTaskForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseConversionTaskForResourceRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
