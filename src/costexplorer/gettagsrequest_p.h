// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSREQUEST_P_H
#define QTAWS_GETTAGSREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "gettagsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetTagsRequest;

class GetTagsRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetTagsRequestPrivate(const CostExplorerRequest::Action action,
                                   GetTagsRequest * const q);
    GetTagsRequestPrivate(const GetTagsRequestPrivate &other,
                                   GetTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTagsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
