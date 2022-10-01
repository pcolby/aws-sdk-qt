// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWMEDIASTREAMSREQUEST_P_H
#define QTAWS_ADDFLOWMEDIASTREAMSREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "addflowmediastreamsrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowMediaStreamsRequest;

class AddFlowMediaStreamsRequestPrivate : public MediaConnectRequestPrivate {

public:
    AddFlowMediaStreamsRequestPrivate(const MediaConnectRequest::Action action,
                                   AddFlowMediaStreamsRequest * const q);
    AddFlowMediaStreamsRequestPrivate(const AddFlowMediaStreamsRequestPrivate &other,
                                   AddFlowMediaStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddFlowMediaStreamsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
