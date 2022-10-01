// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTREQUEST_P_H
#define QTAWS_GETDEVENDPOINTREQUEST_P_H

#include "gluerequest_p.h"
#include "getdevendpointrequest.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointRequest;

class GetDevEndpointRequestPrivate : public GlueRequestPrivate {

public:
    GetDevEndpointRequestPrivate(const GlueRequest::Action action,
                                   GetDevEndpointRequest * const q);
    GetDevEndpointRequestPrivate(const GetDevEndpointRequestPrivate &other,
                                   GetDevEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
