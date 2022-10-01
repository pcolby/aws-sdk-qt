// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVENDPOINTREQUEST_P_H
#define QTAWS_CREATEDEVENDPOINTREQUEST_P_H

#include "gluerequest_p.h"
#include "createdevendpointrequest.h"

namespace QtAws {
namespace Glue {

class CreateDevEndpointRequest;

class CreateDevEndpointRequestPrivate : public GlueRequestPrivate {

public:
    CreateDevEndpointRequestPrivate(const GlueRequest::Action action,
                                   CreateDevEndpointRequest * const q);
    CreateDevEndpointRequestPrivate(const CreateDevEndpointRequestPrivate &other,
                                   CreateDevEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
