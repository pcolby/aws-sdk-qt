// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILENAMERESPONSE_H
#define QTAWS_UPDATEROUTINGPROFILENAMERESPONSE_H

#include "connectresponse.h"
#include "updateroutingprofilenamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileNameResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileNameResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateRoutingProfileNameResponse(const UpdateRoutingProfileNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoutingProfileNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileNameResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileNameResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
