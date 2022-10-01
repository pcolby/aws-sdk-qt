// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILERESPONSE_P_H
#define QTAWS_DELETELAUNCHPROFILERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileResponse;

class DeleteLaunchProfileResponsePrivate : public NimbleResponsePrivate {

public:

    explicit DeleteLaunchProfileResponsePrivate(DeleteLaunchProfileResponse * const q);

    void parseDeleteLaunchProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchProfileResponse)
    Q_DISABLE_COPY(DeleteLaunchProfileResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
