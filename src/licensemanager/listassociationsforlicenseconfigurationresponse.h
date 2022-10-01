// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONRESPONSE_H
#define QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "listassociationsforlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListAssociationsForLicenseConfigurationResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListAssociationsForLicenseConfigurationResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListAssociationsForLicenseConfigurationResponse(const ListAssociationsForLicenseConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociationsForLicenseConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociationsForLicenseConfigurationResponse)
    Q_DISABLE_COPY(ListAssociationsForLicenseConfigurationResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
