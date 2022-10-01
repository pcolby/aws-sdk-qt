// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANTASKUISREQUEST_P_H
#define QTAWS_LISTHUMANTASKUISREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listhumantaskuisrequest.h"

namespace QtAws {
namespace SageMaker {

class ListHumanTaskUisRequest;

class ListHumanTaskUisRequestPrivate : public SageMakerRequestPrivate {

public:
    ListHumanTaskUisRequestPrivate(const SageMakerRequest::Action action,
                                   ListHumanTaskUisRequest * const q);
    ListHumanTaskUisRequestPrivate(const ListHumanTaskUisRequestPrivate &other,
                                   ListHumanTaskUisRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHumanTaskUisRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
