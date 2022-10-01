// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSTOKENRESPONSE_H
#define QTAWS_GETACCESSTOKENRESPONSE_H

#include "licensemanagerresponse.h"
#include "getaccesstokenrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetAccessTokenResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetAccessTokenResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetAccessTokenResponse(const GetAccessTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessTokenResponse)
    Q_DISABLE_COPY(GetAccessTokenResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
