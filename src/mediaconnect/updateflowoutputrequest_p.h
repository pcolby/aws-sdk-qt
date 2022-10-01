// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWOUTPUTREQUEST_P_H
#define QTAWS_UPDATEFLOWOUTPUTREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "updateflowoutputrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowOutputRequest;

class UpdateFlowOutputRequestPrivate : public MediaConnectRequestPrivate {

public:
    UpdateFlowOutputRequestPrivate(const MediaConnectRequest::Action action,
                                   UpdateFlowOutputRequest * const q);
    UpdateFlowOutputRequestPrivate(const UpdateFlowOutputRequestPrivate &other,
                                   UpdateFlowOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFlowOutputRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
