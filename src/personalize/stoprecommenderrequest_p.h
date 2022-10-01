// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRECOMMENDERREQUEST_P_H
#define QTAWS_STOPRECOMMENDERREQUEST_P_H

#include "personalizerequest_p.h"
#include "stoprecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class StopRecommenderRequest;

class StopRecommenderRequestPrivate : public PersonalizeRequestPrivate {

public:
    StopRecommenderRequestPrivate(const PersonalizeRequest::Action action,
                                   StopRecommenderRequest * const q);
    StopRecommenderRequestPrivate(const StopRecommenderRequestPrivate &other,
                                   StopRecommenderRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
