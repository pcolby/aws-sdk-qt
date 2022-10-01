// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_P_H
#define QTAWS_LISTCOMPONENTSREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "listcomponentsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListComponentsRequest;

class ListComponentsRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    ListComponentsRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   ListComponentsRequest * const q);
    ListComponentsRequestPrivate(const ListComponentsRequestPrivate &other,
                                   ListComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
