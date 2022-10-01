// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIZECONSTRAINTSETREQUEST_P_H
#define QTAWS_CREATESIZECONSTRAINTSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createsizeconstraintsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateSizeConstraintSetRequest;

class CreateSizeConstraintSetRequestPrivate : public WafRequestPrivate {

public:
    CreateSizeConstraintSetRequestPrivate(const WafRequest::Action action,
                                   CreateSizeConstraintSetRequest * const q);
    CreateSizeConstraintSetRequestPrivate(const CreateSizeConstraintSetRequestPrivate &other,
                                   CreateSizeConstraintSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSizeConstraintSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
