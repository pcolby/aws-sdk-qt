// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPSRESPONSE_H
#define QTAWS_GETAPPSRESPONSE_H

#include "pinpointresponse.h"
#include "getappsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetAppsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetAppsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetAppsResponse(const GetAppsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppsResponse)
    Q_DISABLE_COPY(GetAppsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
