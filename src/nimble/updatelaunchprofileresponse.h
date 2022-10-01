// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILERESPONSE_H
#define QTAWS_UPDATELAUNCHPROFILERESPONSE_H

#include "nimbleresponse.h"
#include "updatelaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileResponsePrivate;

class QTAWSNIMBLE_EXPORT UpdateLaunchProfileResponse : public NimbleResponse {
    Q_OBJECT

public:
    UpdateLaunchProfileResponse(const UpdateLaunchProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLaunchProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchProfileResponse)
    Q_DISABLE_COPY(UpdateLaunchProfileResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
