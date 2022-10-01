// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPASSESSMENTSREQUEST_P_H
#define QTAWS_LISTAPPASSESSMENTSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listappassessmentsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppAssessmentsRequest;

class ListAppAssessmentsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAppAssessmentsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAppAssessmentsRequest * const q);
    ListAppAssessmentsRequestPrivate(const ListAppAssessmentsRequestPrivate &other,
                                   ListAppAssessmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppAssessmentsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
