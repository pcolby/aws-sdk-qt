// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPERESPONSE_P_H
#define QTAWS_GETPROFILEOBJECTTYPERESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeResponse;

class GetProfileObjectTypeResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit GetProfileObjectTypeResponsePrivate(GetProfileObjectTypeResponse * const q);

    void parseGetProfileObjectTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProfileObjectTypeResponse)
    Q_DISABLE_COPY(GetProfileObjectTypeResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
