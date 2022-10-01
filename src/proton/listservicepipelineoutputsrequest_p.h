// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEOUTPUTSREQUEST_P_H
#define QTAWS_LISTSERVICEPIPELINEOUTPUTSREQUEST_P_H

#include "protonrequest_p.h"
#include "listservicepipelineoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineOutputsRequest;

class ListServicePipelineOutputsRequestPrivate : public ProtonRequestPrivate {

public:
    ListServicePipelineOutputsRequestPrivate(const ProtonRequest::Action action,
                                   ListServicePipelineOutputsRequest * const q);
    ListServicePipelineOutputsRequestPrivate(const ListServicePipelineOutputsRequestPrivate &other,
                                   ListServicePipelineOutputsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServicePipelineOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
