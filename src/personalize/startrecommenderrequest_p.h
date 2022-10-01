// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDERREQUEST_P_H
#define QTAWS_STARTRECOMMENDERREQUEST_P_H

#include "personalizerequest_p.h"
#include "startrecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class StartRecommenderRequest;

class StartRecommenderRequestPrivate : public PersonalizeRequestPrivate {

public:
    StartRecommenderRequestPrivate(const PersonalizeRequest::Action action,
                                   StartRecommenderRequest * const q);
    StartRecommenderRequestPrivate(const StartRecommenderRequestPrivate &other,
                                   StartRecommenderRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
