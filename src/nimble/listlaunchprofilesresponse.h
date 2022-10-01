// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILESRESPONSE_H
#define QTAWS_LISTLAUNCHPROFILESRESPONSE_H

#include "nimbleresponse.h"
#include "listlaunchprofilesrequest.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfilesResponsePrivate;

class QTAWSNIMBLE_EXPORT ListLaunchProfilesResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListLaunchProfilesResponse(const ListLaunchProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLaunchProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLaunchProfilesResponse)
    Q_DISABLE_COPY(ListLaunchProfilesResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
