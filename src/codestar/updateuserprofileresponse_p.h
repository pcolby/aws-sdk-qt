// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPROFILERESPONSE_P_H
#define QTAWS_UPDATEUSERPROFILERESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class UpdateUserProfileResponse;

class UpdateUserProfileResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit UpdateUserProfileResponsePrivate(UpdateUserProfileResponse * const q);

    void parseUpdateUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserProfileResponse)
    Q_DISABLE_COPY(UpdateUserProfileResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
