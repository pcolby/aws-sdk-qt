// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEDIMENSIONSREQUEST_P_H
#define QTAWS_LISTAVAILABLERESOURCEDIMENSIONSREQUEST_P_H

#include "pirequest_p.h"
#include "listavailableresourcedimensionsrequest.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceDimensionsRequest;

class ListAvailableResourceDimensionsRequestPrivate : public PiRequestPrivate {

public:
    ListAvailableResourceDimensionsRequestPrivate(const PiRequest::Action action,
                                   ListAvailableResourceDimensionsRequest * const q);
    ListAvailableResourceDimensionsRequestPrivate(const ListAvailableResourceDimensionsRequestPrivate &other,
                                   ListAvailableResourceDimensionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailableResourceDimensionsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
