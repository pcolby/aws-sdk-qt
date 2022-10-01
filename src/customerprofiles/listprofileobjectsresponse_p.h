// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTSRESPONSE_P_H
#define QTAWS_LISTPROFILEOBJECTSRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectsResponse;

class ListProfileObjectsResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit ListProfileObjectsResponsePrivate(ListProfileObjectsResponse * const q);

    void parseListProfileObjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProfileObjectsResponse)
    Q_DISABLE_COPY(ListProfileObjectsResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
