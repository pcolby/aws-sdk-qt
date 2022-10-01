// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROBLEMSREQUEST_P_H
#define QTAWS_LISTPROBLEMSREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "listproblemsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListProblemsRequest;

class ListProblemsRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    ListProblemsRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   ListProblemsRequest * const q);
    ListProblemsRequestPrivate(const ListProblemsRequestPrivate &other,
                                   ListProblemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProblemsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
