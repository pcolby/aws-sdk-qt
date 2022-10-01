// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYRESOLUTIONJOBRESPONSE_P_H
#define QTAWS_GETIDENTITYRESOLUTIONJOBRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class GetIdentityResolutionJobResponse;

class GetIdentityResolutionJobResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit GetIdentityResolutionJobResponsePrivate(GetIdentityResolutionJobResponse * const q);

    void parseGetIdentityResolutionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityResolutionJobResponse)
    Q_DISABLE_COPY(GetIdentityResolutionJobResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
