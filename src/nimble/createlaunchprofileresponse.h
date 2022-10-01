// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHPROFILERESPONSE_H
#define QTAWS_CREATELAUNCHPROFILERESPONSE_H

#include "nimbleresponse.h"
#include "createlaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class CreateLaunchProfileResponsePrivate;

class QTAWSNIMBLE_EXPORT CreateLaunchProfileResponse : public NimbleResponse {
    Q_OBJECT

public:
    CreateLaunchProfileResponse(const CreateLaunchProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLaunchProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchProfileResponse)
    Q_DISABLE_COPY(CreateLaunchProfileResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
