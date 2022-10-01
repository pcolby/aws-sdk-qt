// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESRESPONSE_H
#define QTAWS_LISTSECURITYPROFILESRESPONSE_H

#include "connectresponse.h"
#include "listsecurityprofilesrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityProfilesResponsePrivate;

class QTAWSCONNECT_EXPORT ListSecurityProfilesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListSecurityProfilesResponse(const ListSecurityProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecurityProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityProfilesResponse)
    Q_DISABLE_COPY(ListSecurityProfilesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
