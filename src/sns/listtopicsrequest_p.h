// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSREQUEST_P_H
#define QTAWS_LISTTOPICSREQUEST_P_H

#include "snsrequest_p.h"
#include "listtopicsrequest.h"

namespace QtAws {
namespace Sns {

class ListTopicsRequest;

class ListTopicsRequestPrivate : public SnsRequestPrivate {

public:
    ListTopicsRequestPrivate(const SnsRequest::Action action,
                                   ListTopicsRequest * const q);
    ListTopicsRequestPrivate(const ListTopicsRequestPrivate &other,
                                   ListTopicsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTopicsRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
