// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVENDPOINTSREQUEST_P_H
#define QTAWS_LISTDEVENDPOINTSREQUEST_P_H

#include "gluerequest_p.h"
#include "listdevendpointsrequest.h"

namespace QtAws {
namespace Glue {

class ListDevEndpointsRequest;

class ListDevEndpointsRequestPrivate : public GlueRequestPrivate {

public:
    ListDevEndpointsRequestPrivate(const GlueRequest::Action action,
                                   ListDevEndpointsRequest * const q);
    ListDevEndpointsRequestPrivate(const ListDevEndpointsRequestPrivate &other,
                                   ListDevEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDevEndpointsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
