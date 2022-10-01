// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERROUTINGPROFILERESPONSE_H
#define QTAWS_UPDATEUSERROUTINGPROFILERESPONSE_H

#include "connectresponse.h"
#include "updateuserroutingprofilerequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserRoutingProfileResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateUserRoutingProfileResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateUserRoutingProfileResponse(const UpdateUserRoutingProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserRoutingProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserRoutingProfileResponse)
    Q_DISABLE_COPY(UpdateUserRoutingProfileResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
