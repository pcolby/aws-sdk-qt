// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELENSESREQUEST_P_H
#define QTAWS_ASSOCIATELENSESREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "associatelensesrequest.h"

namespace QtAws {
namespace WellArchitected {

class AssociateLensesRequest;

class AssociateLensesRequestPrivate : public WellArchitectedRequestPrivate {

public:
    AssociateLensesRequestPrivate(const WellArchitectedRequest::Action action,
                                   AssociateLensesRequest * const q);
    AssociateLensesRequestPrivate(const AssociateLensesRequestPrivate &other,
                                   AssociateLensesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateLensesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
