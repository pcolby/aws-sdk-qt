// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVENDPOINTREQUEST_P_H
#define QTAWS_DELETEDEVENDPOINTREQUEST_P_H

#include "gluerequest_p.h"
#include "deletedevendpointrequest.h"

namespace QtAws {
namespace Glue {

class DeleteDevEndpointRequest;

class DeleteDevEndpointRequestPrivate : public GlueRequestPrivate {

public:
    DeleteDevEndpointRequestPrivate(const GlueRequest::Action action,
                                   DeleteDevEndpointRequest * const q);
    DeleteDevEndpointRequestPrivate(const DeleteDevEndpointRequestPrivate &other,
                                   DeleteDevEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
