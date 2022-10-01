// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPETEMPLATERESPONSE_P_H
#define QTAWS_GETPROFILEOBJECTTYPETEMPLATERESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeTemplateResponse;

class GetProfileObjectTypeTemplateResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit GetProfileObjectTypeTemplateResponsePrivate(GetProfileObjectTypeTemplateResponse * const q);

    void parseGetProfileObjectTypeTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProfileObjectTypeTemplateResponse)
    Q_DISABLE_COPY(GetProfileObjectTypeTemplateResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
