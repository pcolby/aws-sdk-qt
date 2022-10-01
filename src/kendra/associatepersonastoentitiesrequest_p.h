// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPERSONASTOENTITIESREQUEST_P_H
#define QTAWS_ASSOCIATEPERSONASTOENTITIESREQUEST_P_H

#include "kendrarequest_p.h"
#include "associatepersonastoentitiesrequest.h"

namespace QtAws {
namespace Kendra {

class AssociatePersonasToEntitiesRequest;

class AssociatePersonasToEntitiesRequestPrivate : public KendraRequestPrivate {

public:
    AssociatePersonasToEntitiesRequestPrivate(const KendraRequest::Action action,
                                   AssociatePersonasToEntitiesRequest * const q);
    AssociatePersonasToEntitiesRequestPrivate(const AssociatePersonasToEntitiesRequestPrivate &other,
                                   AssociatePersonasToEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePersonasToEntitiesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
