// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGPROFILERESPONSE_H
#define QTAWS_CREATEROUTINGPROFILERESPONSE_H

#include "connectresponse.h"
#include "createroutingprofilerequest.h"

namespace QtAws {
namespace Connect {

class CreateRoutingProfileResponsePrivate;

class QTAWSCONNECT_EXPORT CreateRoutingProfileResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateRoutingProfileResponse(const CreateRoutingProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRoutingProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoutingProfileResponse)
    Q_DISABLE_COPY(CreateRoutingProfileResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
