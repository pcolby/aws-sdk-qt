// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDERSREQUEST_P_H
#define QTAWS_LISTRECOMMENDERSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listrecommendersrequest.h"

namespace QtAws {
namespace Personalize {

class ListRecommendersRequest;

class ListRecommendersRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListRecommendersRequestPrivate(const PersonalizeRequest::Action action,
                                   ListRecommendersRequest * const q);
    ListRecommendersRequestPrivate(const ListRecommendersRequestPrivate &other,
                                   ListRecommendersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecommendersRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
