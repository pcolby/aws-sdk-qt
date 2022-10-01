// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEDETAILSRESPONSE_H
#define QTAWS_GETLAUNCHPROFILEDETAILSRESPONSE_H

#include "nimbleresponse.h"
#include "getlaunchprofiledetailsrequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileDetailsResponsePrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileDetailsResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetLaunchProfileDetailsResponse(const GetLaunchProfileDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLaunchProfileDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileDetailsResponse)
    Q_DISABLE_COPY(GetLaunchProfileDetailsResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
