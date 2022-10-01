// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPROFILERESPONSE_P_H
#define QTAWS_UPDATEUSERPROFILERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateUserProfileResponse;

class UpdateUserProfileResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateUserProfileResponsePrivate(UpdateUserProfileResponse * const q);

    void parseUpdateUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserProfileResponse)
    Q_DISABLE_COPY(UpdateUserProfileResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
