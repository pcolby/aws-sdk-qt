// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIZECONSTRAINTSETREQUEST_P_H
#define QTAWS_DELETESIZECONSTRAINTSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deletesizeconstraintsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteSizeConstraintSetRequest;

class DeleteSizeConstraintSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteSizeConstraintSetRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteSizeConstraintSetRequest * const q);
    DeleteSizeConstraintSetRequestPrivate(const DeleteSizeConstraintSetRequestPrivate &other,
                                   DeleteSizeConstraintSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSizeConstraintSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
