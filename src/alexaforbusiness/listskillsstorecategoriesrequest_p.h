// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSSTORECATEGORIESREQUEST_P_H
#define QTAWS_LISTSKILLSSTORECATEGORIESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listskillsstorecategoriesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsStoreCategoriesRequest;

class ListSkillsStoreCategoriesRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListSkillsStoreCategoriesRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListSkillsStoreCategoriesRequest * const q);
    ListSkillsStoreCategoriesRequestPrivate(const ListSkillsStoreCategoriesRequestPrivate &other,
                                   ListSkillsStoreCategoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSkillsStoreCategoriesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
