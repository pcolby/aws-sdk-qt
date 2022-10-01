// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMYUSERPROFILERESPONSE_P_H
#define QTAWS_UPDATEMYUSERPROFILERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateMyUserProfileResponse;

class UpdateMyUserProfileResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateMyUserProfileResponsePrivate(UpdateMyUserProfileResponse * const q);

    void parseUpdateMyUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMyUserProfileResponse)
    Q_DISABLE_COPY(UpdateMyUserProfileResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
