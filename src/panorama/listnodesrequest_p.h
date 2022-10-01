// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODESREQUEST_P_H
#define QTAWS_LISTNODESREQUEST_P_H

#include "panoramarequest_p.h"
#include "listnodesrequest.h"

namespace QtAws {
namespace Panorama {

class ListNodesRequest;

class ListNodesRequestPrivate : public PanoramaRequestPrivate {

public:
    ListNodesRequestPrivate(const PanoramaRequest::Action action,
                                   ListNodesRequest * const q);
    ListNodesRequestPrivate(const ListNodesRequestPrivate &other,
                                   ListNodesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNodesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
