// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOMMENDERREQUEST_P_H
#define QTAWS_UPDATERECOMMENDERREQUEST_P_H

#include "personalizerequest_p.h"
#include "updaterecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class UpdateRecommenderRequest;

class UpdateRecommenderRequestPrivate : public PersonalizeRequestPrivate {

public:
    UpdateRecommenderRequestPrivate(const PersonalizeRequest::Action action,
                                   UpdateRecommenderRequest * const q);
    UpdateRecommenderRequestPrivate(const UpdateRecommenderRequestPrivate &other,
                                   UpdateRecommenderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
