// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIZECONSTRAINTSETREQUEST_P_H
#define QTAWS_DELETESIZECONSTRAINTSETREQUEST_P_H

#include "wafrequest_p.h"
#include "deletesizeconstraintsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteSizeConstraintSetRequest;

class DeleteSizeConstraintSetRequestPrivate : public WafRequestPrivate {

public:
    DeleteSizeConstraintSetRequestPrivate(const WafRequest::Action action,
                                   DeleteSizeConstraintSetRequest * const q);
    DeleteSizeConstraintSetRequestPrivate(const DeleteSizeConstraintSetRequestPrivate &other,
                                   DeleteSizeConstraintSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSizeConstraintSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
