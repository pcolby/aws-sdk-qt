// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYPROFILERESPONSE_H
#define QTAWS_UPDATESECURITYPROFILERESPONSE_H

#include "connectresponse.h"
#include "updatesecurityprofilerequest.h"

namespace QtAws {
namespace Connect {

class UpdateSecurityProfileResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateSecurityProfileResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateSecurityProfileResponse(const UpdateSecurityProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecurityProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityProfileResponse)
    Q_DISABLE_COPY(UpdateSecurityProfileResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
