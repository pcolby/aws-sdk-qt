// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCEREQUEST_P_H
#define QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCEREQUEST_P_H

#include "kendrarequest_p.h"
#include "disassociateentitiesfromexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class DisassociateEntitiesFromExperienceRequest;

class DisassociateEntitiesFromExperienceRequestPrivate : public KendraRequestPrivate {

public:
    DisassociateEntitiesFromExperienceRequestPrivate(const KendraRequest::Action action,
                                   DisassociateEntitiesFromExperienceRequest * const q);
    DisassociateEntitiesFromExperienceRequestPrivate(const DisassociateEntitiesFromExperienceRequestPrivate &other,
                                   DisassociateEntitiesFromExperienceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateEntitiesFromExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
