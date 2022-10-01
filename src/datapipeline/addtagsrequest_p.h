// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSREQUEST_P_H
#define QTAWS_ADDTAGSREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "addtagsrequest.h"

namespace QtAws {
namespace DataPipeline {

class AddTagsRequest;

class AddTagsRequestPrivate : public DataPipelineRequestPrivate {

public:
    AddTagsRequestPrivate(const DataPipelineRequest::Action action,
                                   AddTagsRequest * const q);
    AddTagsRequestPrivate(const AddTagsRequestPrivate &other,
                                   AddTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
