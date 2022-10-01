// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGSRESPONSE_H
#define QTAWS_UPDATESERVICESETTINGSRESPONSE_H

#include "licensemanagerresponse.h"
#include "updateservicesettingsrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateServiceSettingsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT UpdateServiceSettingsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    UpdateServiceSettingsResponse(const UpdateServiceSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceSettingsResponse)
    Q_DISABLE_COPY(UpdateServiceSettingsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
