// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOOTSTRAPACTIONSREQUEST_P_H
#define QTAWS_LISTBOOTSTRAPACTIONSREQUEST_P_H

#include "emrrequest_p.h"
#include "listbootstrapactionsrequest.h"

namespace QtAws {
namespace Emr {

class ListBootstrapActionsRequest;

class ListBootstrapActionsRequestPrivate : public EmrRequestPrivate {

public:
    ListBootstrapActionsRequestPrivate(const EmrRequest::Action action,
                                   ListBootstrapActionsRequest * const q);
    ListBootstrapActionsRequestPrivate(const ListBootstrapActionsRequestPrivate &other,
                                   ListBootstrapActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBootstrapActionsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
