// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSACTIONSREQUEST_P_H
#define QTAWS_LISTTRANSACTIONSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "listtransactionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListTransactionsRequest;

class ListTransactionsRequestPrivate : public LakeFormationRequestPrivate {

public:
    ListTransactionsRequestPrivate(const LakeFormationRequest::Action action,
                                   ListTransactionsRequest * const q);
    ListTransactionsRequestPrivate(const ListTransactionsRequestPrivate &other,
                                   ListTransactionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTransactionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
