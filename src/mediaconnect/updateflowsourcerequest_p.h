// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWSOURCEREQUEST_P_H
#define QTAWS_UPDATEFLOWSOURCEREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "updateflowsourcerequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowSourceRequest;

class UpdateFlowSourceRequestPrivate : public MediaConnectRequestPrivate {

public:
    UpdateFlowSourceRequestPrivate(const MediaConnectRequest::Action action,
                                   UpdateFlowSourceRequest * const q);
    UpdateFlowSourceRequestPrivate(const UpdateFlowSourceRequestPrivate &other,
                                   UpdateFlowSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFlowSourceRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
