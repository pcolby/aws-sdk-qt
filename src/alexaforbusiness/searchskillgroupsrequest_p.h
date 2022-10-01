// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSKILLGROUPSREQUEST_P_H
#define QTAWS_SEARCHSKILLGROUPSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchskillgroupsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchSkillGroupsRequest;

class SearchSkillGroupsRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchSkillGroupsRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchSkillGroupsRequest * const q);
    SearchSkillGroupsRequestPrivate(const SearchSkillGroupsRequestPrivate &other,
                                   SearchSkillGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchSkillGroupsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
