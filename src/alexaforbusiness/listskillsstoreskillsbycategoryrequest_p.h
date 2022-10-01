// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSSTORESKILLSBYCATEGORYREQUEST_P_H
#define QTAWS_LISTSKILLSSTORESKILLSBYCATEGORYREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listskillsstoreskillsbycategoryrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsStoreSkillsByCategoryRequest;

class ListSkillsStoreSkillsByCategoryRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListSkillsStoreSkillsByCategoryRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListSkillsStoreSkillsByCategoryRequest * const q);
    ListSkillsStoreSkillsByCategoryRequestPrivate(const ListSkillsStoreSkillsByCategoryRequestPrivate &other,
                                   ListSkillsStoreSkillsByCategoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSkillsStoreSkillsByCategoryRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
