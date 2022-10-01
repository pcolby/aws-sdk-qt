// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCELERATORSREQUEST_P_H
#define QTAWS_LISTACCELERATORSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listacceleratorsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListAcceleratorsRequest;

class ListAcceleratorsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListAcceleratorsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListAcceleratorsRequest * const q);
    ListAcceleratorsRequestPrivate(const ListAcceleratorsRequestPrivate &other,
                                   ListAcceleratorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAcceleratorsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
