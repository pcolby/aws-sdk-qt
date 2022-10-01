// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACCESSPOLICIESRESPONSE_P_H
#define QTAWS_UPDATESERVICEACCESSPOLICIESRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class UpdateServiceAccessPoliciesResponse;

class UpdateServiceAccessPoliciesResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit UpdateServiceAccessPoliciesResponsePrivate(UpdateServiceAccessPoliciesResponse * const q);

    void parseUpdateServiceAccessPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceAccessPoliciesResponse)
    Q_DISABLE_COPY(UpdateServiceAccessPoliciesResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
