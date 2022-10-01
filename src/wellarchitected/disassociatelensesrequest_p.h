// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELENSESREQUEST_P_H
#define QTAWS_DISASSOCIATELENSESREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "disassociatelensesrequest.h"

namespace QtAws {
namespace WellArchitected {

class DisassociateLensesRequest;

class DisassociateLensesRequestPrivate : public WellArchitectedRequestPrivate {

public:
    DisassociateLensesRequestPrivate(const WellArchitectedRequest::Action action,
                                   DisassociateLensesRequest * const q);
    DisassociateLensesRequestPrivate(const DisassociateLensesRequestPrivate &other,
                                   DisassociateLensesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateLensesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
