// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSREQUEST_P_H
#define QTAWS_GETINSIGHTSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "getinsightsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetInsightsRequest;

class GetInsightsRequestPrivate : public SecurityHubRequestPrivate {

public:
    GetInsightsRequestPrivate(const SecurityHubRequest::Action action,
                                   GetInsightsRequest * const q);
    GetInsightsRequestPrivate(const GetInsightsRequestPrivate &other,
                                   GetInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
