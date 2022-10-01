// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONINSIGHTSREQUEST_P_H
#define QTAWS_LISTORGANIZATIONINSIGHTSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listorganizationinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListOrganizationInsightsRequest;

class ListOrganizationInsightsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListOrganizationInsightsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListOrganizationInsightsRequest * const q);
    ListOrganizationInsightsRequestPrivate(const ListOrganizationInsightsRequestPrivate &other,
                                   ListOrganizationInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOrganizationInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
