// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWOUTPUTREQUEST_P_H
#define QTAWS_REMOVEFLOWOUTPUTREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "removeflowoutputrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowOutputRequest;

class RemoveFlowOutputRequestPrivate : public MediaConnectRequestPrivate {

public:
    RemoveFlowOutputRequestPrivate(const MediaConnectRequest::Action action,
                                   RemoveFlowOutputRequest * const q);
    RemoveFlowOutputRequestPrivate(const RemoveFlowOutputRequestPrivate &other,
                                   RemoveFlowOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFlowOutputRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
