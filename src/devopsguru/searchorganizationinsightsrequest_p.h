// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHORGANIZATIONINSIGHTSREQUEST_P_H
#define QTAWS_SEARCHORGANIZATIONINSIGHTSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "searchorganizationinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchOrganizationInsightsRequest;

class SearchOrganizationInsightsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    SearchOrganizationInsightsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   SearchOrganizationInsightsRequest * const q);
    SearchOrganizationInsightsRequestPrivate(const SearchOrganizationInsightsRequestPrivate &other,
                                   SearchOrganizationInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchOrganizationInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
