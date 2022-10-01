// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHPROFILERESPONSE_P_H
#define QTAWS_CREATELAUNCHPROFILERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class CreateLaunchProfileResponse;

class CreateLaunchProfileResponsePrivate : public NimbleResponsePrivate {

public:

    explicit CreateLaunchProfileResponsePrivate(CreateLaunchProfileResponse * const q);

    void parseCreateLaunchProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLaunchProfileResponse)
    Q_DISABLE_COPY(CreateLaunchProfileResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
