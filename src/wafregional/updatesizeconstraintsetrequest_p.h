// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIZECONSTRAINTSETREQUEST_P_H
#define QTAWS_UPDATESIZECONSTRAINTSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updatesizeconstraintsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateSizeConstraintSetRequest;

class UpdateSizeConstraintSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateSizeConstraintSetRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateSizeConstraintSetRequest * const q);
    UpdateSizeConstraintSetRequestPrivate(const UpdateSizeConstraintSetRequestPrivate &other,
                                   UpdateSizeConstraintSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSizeConstraintSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
