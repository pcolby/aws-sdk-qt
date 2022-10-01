// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCEREQUEST_P_H
#define QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "createlicenseconversiontaskforresourcerequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConversionTaskForResourceRequest;

class CreateLicenseConversionTaskForResourceRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CreateLicenseConversionTaskForResourceRequestPrivate(const LicenseManagerRequest::Action action,
                                   CreateLicenseConversionTaskForResourceRequest * const q);
    CreateLicenseConversionTaskForResourceRequestPrivate(const CreateLicenseConversionTaskForResourceRequestPrivate &other,
                                   CreateLicenseConversionTaskForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLicenseConversionTaskForResourceRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
