// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLAUNCHPROFILEMEMBERSRESPONSE_H
#define QTAWS_PUTLAUNCHPROFILEMEMBERSRESPONSE_H

#include "nimbleresponse.h"
#include "putlaunchprofilemembersrequest.h"

namespace QtAws {
namespace Nimble {

class PutLaunchProfileMembersResponsePrivate;

class QTAWSNIMBLE_EXPORT PutLaunchProfileMembersResponse : public NimbleResponse {
    Q_OBJECT

public:
    PutLaunchProfileMembersResponse(const PutLaunchProfileMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLaunchProfileMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLaunchProfileMembersResponse)
    Q_DISABLE_COPY(PutLaunchProfileMembersResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
