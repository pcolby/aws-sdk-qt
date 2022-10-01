// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILEPERMISSIONSRESPONSE_H
#define QTAWS_LISTSECURITYPROFILEPERMISSIONSRESPONSE_H

#include "connectresponse.h"
#include "listsecurityprofilepermissionsrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityProfilePermissionsResponsePrivate;

class QTAWSCONNECT_EXPORT ListSecurityProfilePermissionsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListSecurityProfilePermissionsResponse(const ListSecurityProfilePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecurityProfilePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityProfilePermissionsResponse)
    Q_DISABLE_COPY(ListSecurityProfilePermissionsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
