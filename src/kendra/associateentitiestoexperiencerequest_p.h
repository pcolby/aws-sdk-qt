// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENTITIESTOEXPERIENCEREQUEST_P_H
#define QTAWS_ASSOCIATEENTITIESTOEXPERIENCEREQUEST_P_H

#include "kendrarequest_p.h"
#include "associateentitiestoexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class AssociateEntitiesToExperienceRequest;

class AssociateEntitiesToExperienceRequestPrivate : public KendraRequestPrivate {

public:
    AssociateEntitiesToExperienceRequestPrivate(const KendraRequest::Action action,
                                   AssociateEntitiesToExperienceRequest * const q);
    AssociateEntitiesToExperienceRequestPrivate(const AssociateEntitiesToExperienceRequestPrivate &other,
                                   AssociateEntitiesToExperienceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateEntitiesToExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
