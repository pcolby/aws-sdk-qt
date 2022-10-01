// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEMEMBERRESPONSE_H
#define QTAWS_GETLAUNCHPROFILEMEMBERRESPONSE_H

#include "nimbleresponse.h"
#include "getlaunchprofilememberrequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileMemberResponsePrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileMemberResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetLaunchProfileMemberResponse(const GetLaunchProfileMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLaunchProfileMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileMemberResponse)
    Q_DISABLE_COPY(GetLaunchProfileMemberResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
