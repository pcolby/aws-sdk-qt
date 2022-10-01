// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPSETSREQUEST_P_H
#define QTAWS_LISTIPSETSREQUEST_P_H

#include "wafrequest_p.h"
#include "listipsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListIPSetsRequest;

class ListIPSetsRequestPrivate : public WafRequestPrivate {

public:
    ListIPSetsRequestPrivate(const WafRequest::Action action,
                                   ListIPSetsRequest * const q);
    ListIPSetsRequestPrivate(const ListIPSetsRequestPrivate &other,
                                   ListIPSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIPSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
