// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTGRANTRESPONSE_H
#define QTAWS_ACCEPTGRANTRESPONSE_H

#include "licensemanagerresponse.h"
#include "acceptgrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class AcceptGrantResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT AcceptGrantResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    AcceptGrantResponse(const AcceptGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptGrantResponse)
    Q_DISABLE_COPY(AcceptGrantResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
