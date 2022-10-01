// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSIGHTSREQUEST_P_H
#define QTAWS_LISTINSIGHTSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListInsightsRequest;

class ListInsightsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListInsightsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListInsightsRequest * const q);
    ListInsightsRequestPrivate(const ListInsightsRequestPrivate &other,
                                   ListInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
