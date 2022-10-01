// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONRESPONSE_P_H
#define QTAWS_PUTINTEGRATIONRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class PutIntegrationResponse;

class PutIntegrationResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit PutIntegrationResponsePrivate(PutIntegrationResponse * const q);

    void parsePutIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutIntegrationResponse)
    Q_DISABLE_COPY(PutIntegrationResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
