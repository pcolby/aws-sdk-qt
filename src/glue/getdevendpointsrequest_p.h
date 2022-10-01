// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTSREQUEST_P_H
#define QTAWS_GETDEVENDPOINTSREQUEST_P_H

#include "gluerequest_p.h"
#include "getdevendpointsrequest.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointsRequest;

class GetDevEndpointsRequestPrivate : public GlueRequestPrivate {

public:
    GetDevEndpointsRequestPrivate(const GlueRequest::Action action,
                                   GetDevEndpointsRequest * const q);
    GetDevEndpointsRequestPrivate(const GetDevEndpointsRequestPrivate &other,
                                   GetDevEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDevEndpointsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
