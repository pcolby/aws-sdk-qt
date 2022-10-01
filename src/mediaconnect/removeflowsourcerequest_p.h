// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWSOURCEREQUEST_P_H
#define QTAWS_REMOVEFLOWSOURCEREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "removeflowsourcerequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowSourceRequest;

class RemoveFlowSourceRequestPrivate : public MediaConnectRequestPrivate {

public:
    RemoveFlowSourceRequestPrivate(const MediaConnectRequest::Action action,
                                   RemoveFlowSourceRequest * const q);
    RemoveFlowSourceRequestPrivate(const RemoveFlowSourceRequestPrivate &other,
                                   RemoveFlowSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFlowSourceRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
