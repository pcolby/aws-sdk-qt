// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYRESOLUTIONJOBSRESPONSE_P_H
#define QTAWS_LISTIDENTITYRESOLUTIONJOBSRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIdentityResolutionJobsResponse;

class ListIdentityResolutionJobsResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit ListIdentityResolutionJobsResponsePrivate(ListIdentityResolutionJobsResponse * const q);

    void parseListIdentityResolutionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIdentityResolutionJobsResponse)
    Q_DISABLE_COPY(ListIdentityResolutionJobsResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
