// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONSETTINGSRESPONSE_H
#define QTAWS_GETAPPLICATIONSETTINGSRESPONSE_H

#include "pinpointresponse.h"
#include "getapplicationsettingsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationSettingsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetApplicationSettingsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetApplicationSettingsResponse(const GetApplicationSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationSettingsResponse)
    Q_DISABLE_COPY(GetApplicationSettingsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
