// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONHISTORYREQUEST_P_H
#define QTAWS_LISTCONFIGURATIONHISTORYREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "listconfigurationhistoryrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListConfigurationHistoryRequest;

class ListConfigurationHistoryRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    ListConfigurationHistoryRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   ListConfigurationHistoryRequest * const q);
    ListConfigurationHistoryRequestPrivate(const ListConfigurationHistoryRequestPrivate &other,
                                   ListConfigurationHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConfigurationHistoryRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
