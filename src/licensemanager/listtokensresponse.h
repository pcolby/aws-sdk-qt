// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOKENSRESPONSE_H
#define QTAWS_LISTTOKENSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listtokensrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListTokensResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListTokensResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListTokensResponse(const ListTokensRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTokensRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTokensResponse)
    Q_DISABLE_COPY(ListTokensResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
