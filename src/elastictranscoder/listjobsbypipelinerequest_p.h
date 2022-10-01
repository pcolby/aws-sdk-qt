// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYPIPELINEREQUEST_P_H
#define QTAWS_LISTJOBSBYPIPELINEREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "listjobsbypipelinerequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByPipelineRequest;

class ListJobsByPipelineRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ListJobsByPipelineRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   ListJobsByPipelineRequest * const q);
    ListJobsByPipelineRequestPrivate(const ListJobsByPipelineRequestPrivate &other,
                                   ListJobsByPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobsByPipelineRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
