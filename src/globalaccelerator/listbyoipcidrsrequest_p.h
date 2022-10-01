// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYOIPCIDRSREQUEST_P_H
#define QTAWS_LISTBYOIPCIDRSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listbyoipcidrsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListByoipCidrsRequest;

class ListByoipCidrsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListByoipCidrsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListByoipCidrsRequest * const q);
    ListByoipCidrsRequestPrivate(const ListByoipCidrsRequestPrivate &other,
                                   ListByoipCidrsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListByoipCidrsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
