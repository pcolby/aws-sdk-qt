// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIZECONSTRAINTSETREQUEST_P_H
#define QTAWS_GETSIZECONSTRAINTSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getsizeconstraintsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetSizeConstraintSetRequest;

class GetSizeConstraintSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetSizeConstraintSetRequestPrivate(const WafRegionalRequest::Action action,
                                   GetSizeConstraintSetRequest * const q);
    GetSizeConstraintSetRequestPrivate(const GetSizeConstraintSetRequestPrivate &other,
                                   GetSizeConstraintSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSizeConstraintSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
