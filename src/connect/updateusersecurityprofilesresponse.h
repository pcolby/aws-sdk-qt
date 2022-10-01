// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSECURITYPROFILESRESPONSE_H
#define QTAWS_UPDATEUSERSECURITYPROFILESRESPONSE_H

#include "connectresponse.h"
#include "updateusersecurityprofilesrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserSecurityProfilesResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateUserSecurityProfilesResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateUserSecurityProfilesResponse(const UpdateUserSecurityProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserSecurityProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserSecurityProfilesResponse)
    Q_DISABLE_COPY(UpdateUserSecurityProfilesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
