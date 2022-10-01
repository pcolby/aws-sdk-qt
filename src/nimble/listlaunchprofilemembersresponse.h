// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILEMEMBERSRESPONSE_H
#define QTAWS_LISTLAUNCHPROFILEMEMBERSRESPONSE_H

#include "nimbleresponse.h"
#include "listlaunchprofilemembersrequest.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfileMembersResponsePrivate;

class QTAWSNIMBLE_EXPORT ListLaunchProfileMembersResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListLaunchProfileMembersResponse(const ListLaunchProfileMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLaunchProfileMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLaunchProfileMembersResponse)
    Q_DISABLE_COPY(ListLaunchProfileMembersResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
