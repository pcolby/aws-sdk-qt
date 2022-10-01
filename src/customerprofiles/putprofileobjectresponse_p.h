// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTRESPONSE_P_H
#define QTAWS_PUTPROFILEOBJECTRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectResponse;

class PutProfileObjectResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit PutProfileObjectResponsePrivate(PutProfileObjectResponse * const q);

    void parsePutProfileObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutProfileObjectResponse)
    Q_DISABLE_COPY(PutProfileObjectResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
