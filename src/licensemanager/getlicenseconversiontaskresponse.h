// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONVERSIONTASKRESPONSE_H
#define QTAWS_GETLICENSECONVERSIONTASKRESPONSE_H

#include "licensemanagerresponse.h"
#include "getlicenseconversiontaskrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConversionTaskResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseConversionTaskResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetLicenseConversionTaskResponse(const GetLicenseConversionTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLicenseConversionTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseConversionTaskResponse)
    Q_DISABLE_COPY(GetLicenseConversionTaskResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
