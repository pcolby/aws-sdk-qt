// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSREQUEST_P_H
#define QTAWS_LISTSKILLSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listskillsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsRequest;

class ListSkillsRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListSkillsRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListSkillsRequest * const q);
    ListSkillsRequestPrivate(const ListSkillsRequestPrivate &other,
                                   ListSkillsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSkillsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
