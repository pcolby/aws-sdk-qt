// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVAULTSREQUEST_P_H
#define QTAWS_LISTVAULTSREQUEST_P_H

#include "glacierrequest_p.h"
#include "listvaultsrequest.h"

namespace QtAws {
namespace Glacier {

class ListVaultsRequest;

class ListVaultsRequestPrivate : public GlacierRequestPrivate {

public:
    ListVaultsRequestPrivate(const GlacierRequest::Action action,
                                   ListVaultsRequest * const q);
    ListVaultsRequestPrivate(const ListVaultsRequestPrivate &other,
                                   ListVaultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVaultsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
