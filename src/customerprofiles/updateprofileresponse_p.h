// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILERESPONSE_P_H
#define QTAWS_UPDATEPROFILERESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class UpdateProfileResponse;

class UpdateProfileResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit UpdateProfileResponsePrivate(UpdateProfileResponse * const q);

    void parseUpdateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProfileResponse)
    Q_DISABLE_COPY(UpdateProfileResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
