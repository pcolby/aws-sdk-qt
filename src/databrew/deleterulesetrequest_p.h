// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULESETREQUEST_P_H
#define QTAWS_DELETERULESETREQUEST_P_H

#include "databrewrequest_p.h"
#include "deleterulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteRulesetRequest;

class DeleteRulesetRequestPrivate : public DataBrewRequestPrivate {

public:
    DeleteRulesetRequestPrivate(const DataBrewRequest::Action action,
                                   DeleteRulesetRequest * const q);
    DeleteRulesetRequestPrivate(const DeleteRulesetRequestPrivate &other,
                                   DeleteRulesetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
