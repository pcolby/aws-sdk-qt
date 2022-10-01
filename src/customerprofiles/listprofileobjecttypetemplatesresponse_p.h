// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPETEMPLATESRESPONSE_P_H
#define QTAWS_LISTPROFILEOBJECTTYPETEMPLATESRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypeTemplatesResponse;

class ListProfileObjectTypeTemplatesResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit ListProfileObjectTypeTemplatesResponsePrivate(ListProfileObjectTypeTemplatesResponse * const q);

    void parseListProfileObjectTypeTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProfileObjectTypeTemplatesResponse)
    Q_DISABLE_COPY(ListProfileObjectTypeTemplatesResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
