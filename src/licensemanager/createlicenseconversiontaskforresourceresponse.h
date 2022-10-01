// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCERESPONSE_H
#define QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCERESPONSE_H

#include "licensemanagerresponse.h"
#include "createlicenseconversiontaskforresourcerequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConversionTaskForResourceResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseConversionTaskForResourceResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CreateLicenseConversionTaskForResourceResponse(const CreateLicenseConversionTaskForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLicenseConversionTaskForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseConversionTaskForResourceResponse)
    Q_DISABLE_COPY(CreateLicenseConversionTaskForResourceResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
