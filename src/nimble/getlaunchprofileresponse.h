// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILERESPONSE_H
#define QTAWS_GETLAUNCHPROFILERESPONSE_H

#include "nimbleresponse.h"
#include "getlaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileResponsePrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetLaunchProfileResponse(const GetLaunchProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLaunchProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileResponse)
    Q_DISABLE_COPY(GetLaunchProfileResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
