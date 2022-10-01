// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIZECONSTRAINTSETREQUEST_P_H
#define QTAWS_UPDATESIZECONSTRAINTSETREQUEST_P_H

#include "wafrequest_p.h"
#include "updatesizeconstraintsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateSizeConstraintSetRequest;

class UpdateSizeConstraintSetRequestPrivate : public WafRequestPrivate {

public:
    UpdateSizeConstraintSetRequestPrivate(const WafRequest::Action action,
                                   UpdateSizeConstraintSetRequest * const q);
    UpdateSizeConstraintSetRequestPrivate(const UpdateSizeConstraintSetRequestPrivate &other,
                                   UpdateSizeConstraintSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSizeConstraintSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
