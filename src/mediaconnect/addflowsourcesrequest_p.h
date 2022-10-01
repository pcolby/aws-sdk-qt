// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWSOURCESREQUEST_P_H
#define QTAWS_ADDFLOWSOURCESREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "addflowsourcesrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowSourcesRequest;

class AddFlowSourcesRequestPrivate : public MediaConnectRequestPrivate {

public:
    AddFlowSourcesRequestPrivate(const MediaConnectRequest::Action action,
                                   AddFlowSourcesRequest * const q);
    AddFlowSourcesRequestPrivate(const AddFlowSourcesRequestPrivate &other,
                                   AddFlowSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddFlowSourcesRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
