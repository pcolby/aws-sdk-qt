// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPROFILESRESPONSE_P_H
#define QTAWS_LISTUSERPROFILESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListUserProfilesResponse;

class ListUserProfilesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListUserProfilesResponsePrivate(ListUserProfilesResponse * const q);

    void parseListUserProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserProfilesResponse)
    Q_DISABLE_COPY(ListUserProfilesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
