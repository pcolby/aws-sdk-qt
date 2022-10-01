// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTVERSIONRESPONSE_H
#define QTAWS_CREATEGRANTVERSIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "creategrantversionrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateGrantVersionResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateGrantVersionResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CreateGrantVersionResponse(const CreateGrantVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGrantVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGrantVersionResponse)
    Q_DISABLE_COPY(CreateGrantVersionResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
