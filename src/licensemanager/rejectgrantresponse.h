// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTGRANTRESPONSE_H
#define QTAWS_REJECTGRANTRESPONSE_H

#include "licensemanagerresponse.h"
#include "rejectgrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class RejectGrantResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT RejectGrantResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    RejectGrantResponse(const RejectGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectGrantResponse)
    Q_DISABLE_COPY(RejectGrantResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
