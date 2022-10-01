// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRANTRESPONSE_H
#define QTAWS_DELETEGRANTRESPONSE_H

#include "licensemanagerresponse.h"
#include "deletegrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteGrantResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteGrantResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    DeleteGrantResponse(const DeleteGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGrantResponse)
    Q_DISABLE_COPY(DeleteGrantResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
