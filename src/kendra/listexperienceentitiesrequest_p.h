// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIENCEENTITIESREQUEST_P_H
#define QTAWS_LISTEXPERIENCEENTITIESREQUEST_P_H

#include "kendrarequest_p.h"
#include "listexperienceentitiesrequest.h"

namespace QtAws {
namespace Kendra {

class ListExperienceEntitiesRequest;

class ListExperienceEntitiesRequestPrivate : public KendraRequestPrivate {

public:
    ListExperienceEntitiesRequestPrivate(const KendraRequest::Action action,
                                   ListExperienceEntitiesRequest * const q);
    ListExperienceEntitiesRequestPrivate(const ListExperienceEntitiesRequestPrivate &other,
                                   ListExperienceEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExperienceEntitiesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
