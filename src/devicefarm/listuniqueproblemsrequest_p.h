// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUNIQUEPROBLEMSREQUEST_P_H
#define QTAWS_LISTUNIQUEPROBLEMSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listuniqueproblemsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListUniqueProblemsRequest;

class ListUniqueProblemsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListUniqueProblemsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListUniqueProblemsRequest * const q);
    ListUniqueProblemsRequestPrivate(const ListUniqueProblemsRequestPrivate &other,
                                   ListUniqueProblemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUniqueProblemsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
