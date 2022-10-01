// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGSRESPONSE_H
#define QTAWS_GETSERVICESETTINGSRESPONSE_H

#include "licensemanagerresponse.h"
#include "getservicesettingsrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetServiceSettingsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetServiceSettingsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetServiceSettingsResponse(const GetServiceSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceSettingsResponse)
    Q_DISABLE_COPY(GetServiceSettingsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
