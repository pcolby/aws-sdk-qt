// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVENDPOINTREQUEST_P_H
#define QTAWS_UPDATEDEVENDPOINTREQUEST_P_H

#include "gluerequest_p.h"
#include "updatedevendpointrequest.h"

namespace QtAws {
namespace Glue {

class UpdateDevEndpointRequest;

class UpdateDevEndpointRequestPrivate : public GlueRequestPrivate {

public:
    UpdateDevEndpointRequestPrivate(const GlueRequest::Action action,
                                   UpdateDevEndpointRequest * const q);
    UpdateDevEndpointRequestPrivate(const UpdateDevEndpointRequestPrivate &other,
                                   UpdateDevEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
