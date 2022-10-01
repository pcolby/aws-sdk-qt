// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILEMEMBERRESPONSE_H
#define QTAWS_UPDATELAUNCHPROFILEMEMBERRESPONSE_H

#include "nimbleresponse.h"
#include "updatelaunchprofilememberrequest.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileMemberResponsePrivate;

class QTAWSNIMBLE_EXPORT UpdateLaunchProfileMemberResponse : public NimbleResponse {
    Q_OBJECT

public:
    UpdateLaunchProfileMemberResponse(const UpdateLaunchProfileMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLaunchProfileMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchProfileMemberResponse)
    Q_DISABLE_COPY(UpdateLaunchProfileMemberResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
