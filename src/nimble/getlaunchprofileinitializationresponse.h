// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEINITIALIZATIONRESPONSE_H
#define QTAWS_GETLAUNCHPROFILEINITIALIZATIONRESPONSE_H

#include "nimbleresponse.h"
#include "getlaunchprofileinitializationrequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileInitializationResponsePrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileInitializationResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetLaunchProfileInitializationResponse(const GetLaunchProfileInitializationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLaunchProfileInitializationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileInitializationResponse)
    Q_DISABLE_COPY(GetLaunchProfileInitializationResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
