// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULESETREQUEST_P_H
#define QTAWS_CREATERULESETREQUEST_P_H

#include "databrewrequest_p.h"
#include "createrulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRulesetRequest;

class CreateRulesetRequestPrivate : public DataBrewRequestPrivate {

public:
    CreateRulesetRequestPrivate(const DataBrewRequest::Action action,
                                   CreateRulesetRequest * const q);
    CreateRulesetRequestPrivate(const CreateRulesetRequestPrivate &other,
                                   CreateRulesetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
