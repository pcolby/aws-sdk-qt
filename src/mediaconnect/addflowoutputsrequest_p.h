// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWOUTPUTSREQUEST_P_H
#define QTAWS_ADDFLOWOUTPUTSREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "addflowoutputsrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowOutputsRequest;

class AddFlowOutputsRequestPrivate : public MediaConnectRequestPrivate {

public:
    AddFlowOutputsRequestPrivate(const MediaConnectRequest::Action action,
                                   AddFlowOutputsRequest * const q);
    AddFlowOutputsRequestPrivate(const AddFlowOutputsRequestPrivate &other,
                                   AddFlowOutputsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddFlowOutputsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
