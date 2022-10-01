// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSREQUEST_P_H
#define QTAWS_REMOVETAGSREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "removetagsrequest.h"

namespace QtAws {
namespace DataPipeline {

class RemoveTagsRequest;

class RemoveTagsRequestPrivate : public DataPipelineRequestPrivate {

public:
    RemoveTagsRequestPrivate(const DataPipelineRequest::Action action,
                                   RemoveTagsRequest * const q);
    RemoveTagsRequestPrivate(const RemoveTagsRequestPrivate &other,
                                   RemoveTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
