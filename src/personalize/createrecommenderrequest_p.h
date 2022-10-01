// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERREQUEST_P_H
#define QTAWS_CREATERECOMMENDERREQUEST_P_H

#include "personalizerequest_p.h"
#include "createrecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class CreateRecommenderRequest;

class CreateRecommenderRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateRecommenderRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateRecommenderRequest * const q);
    CreateRecommenderRequestPrivate(const CreateRecommenderRequestPrivate &other,
                                   CreateRecommenderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
