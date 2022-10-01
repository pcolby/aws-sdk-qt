// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTTYPERESPONSE_P_H
#define QTAWS_PUTPROFILEOBJECTTYPERESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectTypeResponse;

class PutProfileObjectTypeResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit PutProfileObjectTypeResponsePrivate(PutProfileObjectTypeResponse * const q);

    void parsePutProfileObjectTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutProfileObjectTypeResponse)
    Q_DISABLE_COPY(PutProfileObjectTypeResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
