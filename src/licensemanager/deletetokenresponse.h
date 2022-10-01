// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOKENRESPONSE_H
#define QTAWS_DELETETOKENRESPONSE_H

#include "licensemanagerresponse.h"
#include "deletetokenrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteTokenResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteTokenResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    DeleteTokenResponse(const DeleteTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTokenResponse)
    Q_DISABLE_COPY(DeleteTokenResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
