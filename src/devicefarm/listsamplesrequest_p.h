// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMPLESREQUEST_P_H
#define QTAWS_LISTSAMPLESREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listsamplesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListSamplesRequest;

class ListSamplesRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListSamplesRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListSamplesRequest * const q);
    ListSamplesRequestPrivate(const ListSamplesRequestPrivate &other,
                                   ListSamplesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSamplesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
