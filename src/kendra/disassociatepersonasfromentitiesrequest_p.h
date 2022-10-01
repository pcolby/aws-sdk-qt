// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPERSONASFROMENTITIESREQUEST_P_H
#define QTAWS_DISASSOCIATEPERSONASFROMENTITIESREQUEST_P_H

#include "kendrarequest_p.h"
#include "disassociatepersonasfromentitiesrequest.h"

namespace QtAws {
namespace Kendra {

class DisassociatePersonasFromEntitiesRequest;

class DisassociatePersonasFromEntitiesRequestPrivate : public KendraRequestPrivate {

public:
    DisassociatePersonasFromEntitiesRequestPrivate(const KendraRequest::Action action,
                                   DisassociatePersonasFromEntitiesRequest * const q);
    DisassociatePersonasFromEntitiesRequestPrivate(const DisassociatePersonasFromEntitiesRequestPrivate &other,
                                   DisassociatePersonasFromEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePersonasFromEntitiesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
