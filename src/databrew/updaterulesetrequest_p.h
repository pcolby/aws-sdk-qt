// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESETREQUEST_P_H
#define QTAWS_UPDATERULESETREQUEST_P_H

#include "databrewrequest_p.h"
#include "updaterulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRulesetRequest;

class UpdateRulesetRequestPrivate : public DataBrewRequestPrivate {

public:
    UpdateRulesetRequestPrivate(const DataBrewRequest::Action action,
                                   UpdateRulesetRequest * const q);
    UpdateRulesetRequestPrivate(const UpdateRulesetRequestPrivate &other,
                                   UpdateRulesetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
