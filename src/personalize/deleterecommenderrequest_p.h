// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERREQUEST_P_H
#define QTAWS_DELETERECOMMENDERREQUEST_P_H

#include "personalizerequest_p.h"
#include "deleterecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteRecommenderRequest;

class DeleteRecommenderRequestPrivate : public PersonalizeRequestPrivate {

public:
    DeleteRecommenderRequestPrivate(const PersonalizeRequest::Action action,
                                   DeleteRecommenderRequest * const q);
    DeleteRecommenderRequestPrivate(const DeleteRecommenderRequestPrivate &other,
                                   DeleteRecommenderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
