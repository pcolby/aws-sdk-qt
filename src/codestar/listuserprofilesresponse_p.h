// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPROFILESRESPONSE_P_H
#define QTAWS_LISTUSERPROFILESRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class ListUserProfilesResponse;

class ListUserProfilesResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit ListUserProfilesResponsePrivate(ListUserProfilesResponse * const q);

    void parseListUserProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserProfilesResponse)
    Q_DISABLE_COPY(ListUserProfilesResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
