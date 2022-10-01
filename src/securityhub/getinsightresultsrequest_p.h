// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRESULTSREQUEST_P_H
#define QTAWS_GETINSIGHTRESULTSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "getinsightresultsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetInsightResultsRequest;

class GetInsightResultsRequestPrivate : public SecurityHubRequestPrivate {

public:
    GetInsightResultsRequestPrivate(const SecurityHubRequest::Action action,
                                   GetInsightResultsRequest * const q);
    GetInsightResultsRequestPrivate(const GetInsightResultsRequestPrivate &other,
                                   GetInsightResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightResultsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
