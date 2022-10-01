// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGRANTRESPONSE_H
#define QTAWS_GETGRANTRESPONSE_H

#include "licensemanagerresponse.h"
#include "getgrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetGrantResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetGrantResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetGrantResponse(const GetGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGrantResponse)
    Q_DISABLE_COPY(GetGrantResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
