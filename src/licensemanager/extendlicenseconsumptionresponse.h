// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDLICENSECONSUMPTIONRESPONSE_H
#define QTAWS_EXTENDLICENSECONSUMPTIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "extendlicenseconsumptionrequest.h"

namespace QtAws {
namespace LicenseManager {

class ExtendLicenseConsumptionResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ExtendLicenseConsumptionResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ExtendLicenseConsumptionResponse(const ExtendLicenseConsumptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExtendLicenseConsumptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExtendLicenseConsumptionResponse)
    Q_DISABLE_COPY(ExtendLicenseConsumptionResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
