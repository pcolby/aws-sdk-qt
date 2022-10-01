// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPESRESPONSE_P_H
#define QTAWS_LISTPROFILEOBJECTTYPESRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypesResponse;

class ListProfileObjectTypesResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit ListProfileObjectTypesResponsePrivate(ListProfileObjectTypesResponse * const q);

    void parseListProfileObjectTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProfileObjectTypesResponse)
    Q_DISABLE_COPY(ListProfileObjectTypesResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
